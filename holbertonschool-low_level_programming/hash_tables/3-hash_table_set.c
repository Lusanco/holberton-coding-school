#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the
 * hash table.
 *
 * @ht: The hash table you want to add or
 * update the key/value to
 * @key: The key. Key cannot be an empty string
 * @value: The value associated with the key.
 * Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *currentNode;
	unsigned long int index;

	if (ht == NULL ||
		key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];
	while (currentNode)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			return (1);
		}
		currentNode = currentNode->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}

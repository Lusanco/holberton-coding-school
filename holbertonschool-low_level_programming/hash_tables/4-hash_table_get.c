#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated
 * with a key in a hash table.
 *
 * @ht: The hash table to search.
 * @key: The key to look for.
 *
 * Return: The value associated with the key,
 * or NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

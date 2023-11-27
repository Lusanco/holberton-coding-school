#include "lists.h"

/**
 * _free_list - Free memory allocated
 * for a list_t list.
 *
 * @head: pointer to the head of the list.
 */

void _free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

/**
 * _strlen - Write a function that
 * returns the length of a string.
 *
 * @s: takes char as argument
 *
 * Return: returns the length
 * of a string
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
#include "lists.h"

/**
 * _strdup - function that returns a
 * pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: Takes string as argument.
 *
 * Return: NULL if str is NULL, and
 * return the copy of the string
 * if succesfull.
 */

char *_strdup(const char *str)
{
	char *pointer;
	size_t len, i;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	pointer = malloc((len + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		pointer[i] = str[i];
	return (pointer);
}

/**
 * add_node_end - Adds a new node at the beggining of a list_t list.
 *
 * @head: Pointer to the pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

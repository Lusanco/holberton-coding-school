#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @n: int argument from struct
 * @head: pointer to nodes/null
 *
 * Return: Address new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int copy;
	dlistint_t *node;

	copy = n;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		printf(" Memory failed to allocate\n");
		return (NULL);
	}
	node->n = copy;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}

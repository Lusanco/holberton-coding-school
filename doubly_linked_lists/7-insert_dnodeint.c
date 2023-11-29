#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position
 *
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to be stored in the new node
 *
 * Return: the address of the new node,
 * or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp;
	unsigned int i;

	if (!h)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *h;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	temp = *h;
	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;
	if (!temp)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	if (temp->next)
		temp->next->prev = node;
	temp->next = node;
	node->prev = temp;
	return (node);
}

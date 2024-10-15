#include "lists.h"

/**
 * dlistint_len - function that returns
 * the number of elements in a linked
 * dlistint_t list.
 *
 * @h: header pointer to dlist
 *
 * Return: Number of elements (nodes)
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}

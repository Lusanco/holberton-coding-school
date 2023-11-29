#include "lists.h"

/**
 * print_dlistint - Function that prints
 * all the elements of a dlistint_t list.
 *
 * @h: header pointer to dlist
 *
 * Return: Num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}

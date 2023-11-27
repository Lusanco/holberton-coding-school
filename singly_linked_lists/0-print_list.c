#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t node_num;

	node_num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_num++;
	}
	return (node_num);
}

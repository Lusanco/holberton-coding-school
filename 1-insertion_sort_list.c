#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list
 * of integers in ascending rodder using the Insertion sort algorithm.
 *
 * @list: Double pointer to the head of the list.
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *insertion = current->prev;
		listint_t *temp = current->next;

		while (insertion != NULL && insertion->n > current->n)
		{
			if (insertion->prev != NULL)
				insertion->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = insertion;

			insertion->next = current->next;
			current->prev = insertion->prev;

			current->next = insertion;
			insertion->prev = current;

			print_list(*list);
			insertion = current->prev;
		}

		current = temp;
	}
}

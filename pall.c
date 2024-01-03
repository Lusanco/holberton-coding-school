#include "monty.h"

/**
 * pall - Prints all the values on the stack,
 * starting from the top of the stack
 *
 * @stack: stack
 * @line_number: line_number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *stack;
	if (current == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

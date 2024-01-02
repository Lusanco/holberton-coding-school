#include "monty.h"

/**
 * pall - Prints all the values on the stack,
 * starting from the top of the stack
 *
 * @stack: stack
 * @line_number: line_number
 */

void pall(monty_stack_t **stack, unsigned int line_number)
{
	monty_stack_t *current = *stack;
	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

#include "monty.h"

/**
 * pall - Function that prints all the values
 * on the stack starting from the top of the stack.
 *
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the monty file.
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

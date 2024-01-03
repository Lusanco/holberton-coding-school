#include "monty.h"

/**
 * free_stack - Free the stack
 *
 * @stack: Pointer to the top of the stack
 */

void free_stack(monty_stack_t **stack)
{
	monty_stack_t *temp;

	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

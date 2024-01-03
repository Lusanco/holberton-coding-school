#include "monty.h"

/**
 * sub - Subtracts the top element of
 * the stack from the second top
 * element from stack
 *
 * @stack: Pointer to the top
 * of the stack
 * @line_number: Line number in the
 * monty file
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	(*stack)->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	free(temp);
}

#include "monty.h"

/**
 * pint - Function that prints value on top of stack.
 *
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the monty file.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		cleanup(NULL, NULL, *stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

#include "monty.h"

/**
 * pint - Prints value on top of stack
 *
 * @stack: pointer top stack
 * @line_number: Line number in the Monty file
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
#include "monty.h"

/**
 * swap - Swaps the top 2 elements of stack
 *
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in monty file
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		cleanup(NULL, NULL, *stack);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->prev = NULL;

	if (temp->next != NULL)
		temp->next->prev = *stack;

	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}

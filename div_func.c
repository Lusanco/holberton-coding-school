#include "monty.h"

/**
 * div - Function that divides the second top element
 * of the stack by the top element of the stack.
 *
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the monty file.
 */

void div_func(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        cleanup(NULL, NULL, *stack);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        /*cleanup(NULL, NULL, *stack);*/
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n /= (*stack)->n;
    temp = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    free(temp);
}
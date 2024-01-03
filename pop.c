#include "monty.h"

/**
 * pop - Removes top of stack
 *
 * @stack: Pointer to top of stack
 * @line_number: Line numer in the monty file
 */

void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        cleanup(NULL, NULL, *stack);
        exit(EXIT_FAILURE);
    }
    temp = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(temp);
}

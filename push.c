#include "monty.h"

/**
 * push - Function that pushes an element to the stack.
 *
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the monty file.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int value, i;
	char *args = strtok(NULL, " \t\n$");

	if (args == NULL || args[0] == '\0')
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		cleanup(NULL, NULL, *stack);
		exit(EXIT_FAILURE);
	}

	for (int i = 0; args[i] != '\0'; i++)
    {
        if (!isdigit(args[i]) && !(i == 0 && (args[i] == '-' || args[i] == '+')))
        {
            fprintf(stderr, "L%u: usage: push integer\n", line_number);
            cleanup(NULL, NULL, *stack);
            exit(EXIT_FAILURE);
        }
    }

    value = atoi(args);
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        cleanup(NULL, NULL, *stack);
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;
    *stack = new_node;
}

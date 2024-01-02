#include "monty.h"

/**
 * push - push
 *
 * @stack: stack
 * @line_number: line_number
 */

void push(monty_stack_t **stack, unsigned int line_number)
{
	monty_stack_t *new_node;
	int value;
	char *args = strtok(NULL, " \t\n");

	if (args == NULL || (!isdigit(*args) && *args != '-'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(args);
	new_node = malloc(sizeof(monty_stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

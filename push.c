#include "monty.h"

/**
 * push - push
 *
 * @stack: stack
 * @line_number: line_number
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int value;
	char *args = strtok(NULL, " \t\n$");

	if (args == NULL || (!isdigit(*args) && *args != '-'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		cleanup(NULL, NULL, *stack);
		exit(EXIT_FAILURE);
	}

	value = atoi(args);
	if (value == 0 && *args != '0')
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		cleanup(NULL, NULL, *stack);
		exit(EXIT_FAILURE);
	}
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

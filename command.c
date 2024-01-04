#include "monty.h"

/**
 * command - Function that finds and
 * executes the corresponding function.
 *
 * @opcode: function commands
 * @stack: struct of stack_t
 * @line_number: number of line
 * @opcodes: struct of instruction_t
 */

void command(char *opcode, stack_t **stack,
			 unsigned int line_number, instruction_t opcodes[])
{
	int i = 0;

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			return;
		}
		i++;
	}

	if (strcmp(opcode, "nop") == 0)
	{
		printf("Debug: Executing nop\n");
		nop(stack, line_number);
		return;
	}
	fprintf(stderr, "Debug: Opcode not recognized: %s\n", opcode);

	for (i = 0; opcodes[i].opcode != NULL; i++)
	{
		fprintf(stderr, "Debug: Available opcode: %s\n", opcodes[i].opcode);
	}

	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	cleanup(NULL, NULL, *stack);
	exit(EXIT_FAILURE);
}

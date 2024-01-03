#include "monty.h"

/**
 * main - main
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: Return
 */

int main(int argc, char *argv[])
{
	char *opcode = NULL;
	FILE *file;
	stack_t *stack = NULL;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"sub", sub},
		{NULL, NULL}};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		if (line[0] == '\n' || (line[0] == ' ' && line[1] == '\n'))
			continue;
		opcode = strtok(line, " \t\n$");

		if (opcode != NULL && strcmp(opcode, "#") != 0)
		{
			if (strcmp(opcode, "push") != 0 &&
				strcmp(opcode, "pall") != 0 &&
				strcmp(opcode, "pint") != 0 &&
				strcmp(opcode, "pop") != 0 &&
				strcmp(opcode, "swap") != 0 &&
				strcmp(opcode, "sub") != 0)
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
				exit(EXIT_FAILURE);
			}
			command(opcode, &stack, line_number, opcodes);
		}
	}
	free(line);
	fclose(file);
	free_stack(&stack);
	return (EXIT_SUCCESS);
}

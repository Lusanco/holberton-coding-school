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
	char *opcode;
	FILE *file;
	monty_stack_t *stack = NULL;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty <file>\n");
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
		opcode = strtok(line, " \t\n$");
		if (opcode != NULL && strcmp(opcode, "#") != 0)
			command(opcode, &stack, line_number, opcodes);
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}

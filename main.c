#include "monty.h"

/**
 * process_line - Processes a line from the input file.
 *
 * @line: Line from the file.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the monty file.
 */

void process_line(char *line, stack_t **stack, unsigned int line_number, instruction_t opcodes[])
{
	char *opcode = strtok(line, " \t\n$");

	if (opcode != NULL && strcmp(opcode, "#") != 0)
	{
		if (strcmp(opcode, "push") != 0 &&
			strcmp(opcode, "pall") != 0 &&
			strcmp(opcode, "pint") != 0 &&
			strcmp(opcode, "pop") != 0 &&
			strcmp(opcode, "swap") != 0 &&
			strcmp(opcode, "add") != 0 &&
			strcmp(opcode, "sub") != 0 &&
			strcmp(opcode, "div") != 0 &&
			strcmp(opcode, "mul") != 0 &&
			strcmp(opcode, "mod") != 0 &&
			strcmp(opcode, "nop") != 0)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
		command(opcode, stack, line_number, opcodes);
	}
}

/**
 * process_file - Processes the entire input file.
 *
 * @file: Pointer to the file to be processed.
 * @stack: Pointer to the top of the stack.
 */

void process_file(FILE *file, stack_t **stack, instruction_t opcodes[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		if (line[0] == '#' || (line[0] == ' ' && line[1] == '#'))
			continue;
		if (line[0] == '\n' || (line[0] == ' ' && line[1] == '\n'))
		continue;
		process_line(line, stack, line_number, opcodes);
	}
}

/**
 * main - Main function.
 *
 * @argc: Arguments count.
 * @argv: Arguments values.
 *
 * Return: SUCCESS, ERROR_FAILURE otherwise.
 */

int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	instruction_t opcodes[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"sub", sub},
	{"add", add},
	{"nop", nop},
	{"div", div_func},
	{"mul", mul_func},
	{"mod", mod_func},
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
		cleanup(file, NULL, stack);
		exit(EXIT_FAILURE);
	}
	process_file(file, &stack);
	cleanup(file, NULL, stack);
	return (EXIT_SUCCESS);
}

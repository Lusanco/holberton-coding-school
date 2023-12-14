#include "header.h"

/**
 * no_command - Print an error message
 * when command is not found
 *
 * @args: array of arguments
 * @str: input string
 */

void no_command(char **args, char *str)
{
	fprintf(stderr, "./hsh: 1: %s: not found\n", args[0]);
	free_iterator(args);
	if (str == NULL && str[0] != '\0')
		free(str);
}

#include "header.h"

/**
 * some_space - If args is NULL, free
 * str and args. For managing some
 * white spaces in stdin.
 *
 * @args: array from the create_tokens.
 * @str: string from the stdin/getline.
 *
 * Return: 0 if NULL, -1 if not.
 */

int some_space(char **args, char *str)
{
	if (args[0] == NULL || str[0] == '\0' || str[0] == '\n')
	{
		free(str);
		free_iterator(args);
		return (0);
	}
	return (-1);
}

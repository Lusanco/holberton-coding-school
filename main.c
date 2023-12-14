#include "header.h"

/**
 * main - shell main
 * function for the
 * shell program.
 *
 * Return: 0
 */

int main(void)
{
	int toggle = 1;
	char *str = NULL;
	size_t len = 0;
	ssize_t bytes;
	char **args;

	while (toggle == 1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		bytes = getline(&str, &len, stdin);
		if (bytes == -1)
		{
			if (isatty(STDIN_FILENO))
				printf("\n");
			toggle = 0;
		}
		else
		{
			no_line(&str, &bytes);
			if (strcasecmp(str, "exit") == 0)
				toggle = 0;
			else
			{
				args = create_tokens(str);
				if ((some_space(args, str)) == 0)
				{
					free_iterator(args);
					continue;
					/*return (main());*/
				}
				if (access(args[0], X_OK) == 0)
					fork_exe(args, environ);
				else
				{
					paths(args, environ);
					if (access(args[0], X_OK) != 0)
						no_command(args, str);
				}
				free_iterator(args);
			}
		}
	}
	free(str);
	return (0);
} /* Filename: 1.main.c */

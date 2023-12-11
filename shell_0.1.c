#include "header.h"

/**
 * main - shell main function for the shell program.
 *
 * Return: 0
 */

int main(void)
{
	int toggle = 1;
	char *str = NULL;
	size_t len = 0;
	ssize_t bytes;

	while (toggle == 1)
	{
		printf("($) ");
		bytes = getline(&str, &len, stdin);
		if (bytes == -1)
		{
			printf("\n");
			toggle = 0;
		}
		else
		{
			if (str[bytes - 1] == '\n')
			{
				str[bytes - 1] = '\0';
				bytes--;
			}
			if (strcasecmp(str, "exit") == 0)
				toggle = 0;
			else
			{
				commander(str);
			}
		}
	}
	free(str);
	return (0);
} /* Filename: shell_0.1.c */

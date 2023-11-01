#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program
 * that adds positive
 * numbers.
 *
 * @argc: Argument Count.
 * @argv: Arguments.
 *
 * Return: 0 if succesful.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int n, r = 0;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]
			!= '\0'; j++)
		{
			if (isdigit
			(argv[i][j]))
			{
				continue;
			}
			else
			{
				printf(
				"Error\n");
				return (1);
			}
		}
		n = atoi(argv[i]);
		r += n;
	}
	printf("%d\n", r);
	return (0);
}

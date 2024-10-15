#include <stdio.h>
#include "main.h"

/**
 * main - Print program
 * name, followed by a
 * new line.
 *
 * @argc: Argument count.
 * @argv: Arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

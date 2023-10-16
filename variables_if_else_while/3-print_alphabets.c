#include <stdio.h>

/**
 * main - Prints in lower then in upper case.
 *
 * Return: 0
 */

int main(void)
{
	char abz;

	for (abz = 'a'; abz <= 'z'; abz++)
	{
		putchar(abz);
	}
	for (abz = 'A'; abz <= 'Z'; abz++)
	{
		putchar(abz);
	}
	putchar('\n');
	return (0);
}

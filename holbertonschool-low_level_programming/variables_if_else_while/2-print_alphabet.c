#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char abz = 'a';

	while (abz <= 'z')
	{
		putchar(abz);
		abz++;
	}
	putchar('\n');

	return (0);
}

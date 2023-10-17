#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_10 - print alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char abz;
	int count = 0;

	while (count <= 9)
	{
		for (abz = 'a'; abz <= 'z'; abz++)
		{
			_putchar(abz);
		}
		_putchar('\n');
		count++;
	}
}

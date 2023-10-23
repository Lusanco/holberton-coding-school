#include "main.h"

/**
 * print_rev - Write a function that
 * prints a string, in reverse,
 * followed by a new line.
 *
 * @s: takes a pointer of type char
 * as argument.
 */

void print_rev(char *s)
{
	int i = 0;
	char l;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		l = s[i];
		_putchar(l);
		i--;
	}
	_putchar('\n');
}

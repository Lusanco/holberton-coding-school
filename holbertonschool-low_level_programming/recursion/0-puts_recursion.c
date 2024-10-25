#include "main.h"

/**
 * _puts_recursion - Write a function that
 * prints a string, followed by a new line.
 *
 * @s: takes an char as an argument.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

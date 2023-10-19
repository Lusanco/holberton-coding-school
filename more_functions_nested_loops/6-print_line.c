#include "main.h"

/**
 * print_line - Write a function that
 * draws a straight line in the terminal.
 *
 * @n: takes an int as argument
 */

void print_line(int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

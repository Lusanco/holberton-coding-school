#include "main.h"

/**
 * print_diagonal - Write a function
 * that draws a diagonal line
 * on the terminal.
 *
 * @n: takes int as argument
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

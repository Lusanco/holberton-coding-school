#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Write a function that 
 * prints all natural numbers from n
 * to 98, followed by a new line.
 *
 * @n: takes int as input
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n);
		n++;
	}
	else if (n > 98)
	{
		_putchar(n);
		n--;
	}
	else
	{
		n = 98;
		_putchar(n);
	}
}

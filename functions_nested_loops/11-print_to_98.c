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
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			int d = n;

			if (d < 0)
			{
				_putchar('-');
				d = -d;
			}
			while (d > 0)
			{
				_putchar('0' + d % 10);
				d /= 10;
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			int d = n;

			if (d < 0)
			{
				_putchar('-');
				d = -d;
			}
			while (d > 0)
			{
				_putchar('0' + d % 10);
				d /= 10;
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

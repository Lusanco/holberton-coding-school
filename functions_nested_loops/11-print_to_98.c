#include <stdio.h>
#include "main.h"

void print_numbers(int a, int b, int c);
void print_digit(int n);

/**
 * print_to_98 - Print all natural
 * numbers from n to 98.
 *
 * @n: The starting number.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		print_numbers(n, 98, 1);  /* Change -1 to 1 for ascending loop */
	}
	else
	{
		print_numbers(n, 98, -1);
	}
}

/**
 * print_numbers - Helper function to
 * print numbers from a to b.
 *
 * @a: The starting number.
 * @b: The ending number.
 * @c: The step size (1 for
 * ascending, -1 for descending).
 */
void print_numbers(int a, int b, int c)
{
	int d = a;

	while ((c == 1 && d <= b) || (c == -1 && d >= b))
	{
		print_digit(d);
		d += c;
		if ((c == 1 && d <= b) || (c == -1 && d >= b))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print_digit - Helper function
 * to print a single digit.
 *
 * @n: The digit to print.
 */
void print_digit(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_digit(n / 10);
	}
	_putchar('0' + (n % 10));
}

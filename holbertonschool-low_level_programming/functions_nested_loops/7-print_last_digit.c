#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: takes an number
 *
 * Return: last
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + n);
	}
	return (n);
}

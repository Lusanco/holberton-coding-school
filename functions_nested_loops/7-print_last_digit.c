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
	int last;

	if (n < 0)
	{
		n = n * -1;
	}

	last = n % 10;

	_putchar('0' + last);
	return (last);
}

#include "lists.h"

/**
 * print_num - Prints a number
 * @n: The number to print
 */

void print_num(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_num(n / 10);
	_putchar(n % 10 + '0');
}

#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sigh of a number
 *
 * @n: takes input number
 *
 * Return: n
 */

int print_sign(int n)
{
	char symbol;
	int count;

	if (n > 0)
	{
		count = 1;
		symbol = '+';
	}
	else if (n == 0)
	{
		count = 0;
		symbol = '0';
	}
	else
	{
		count = -1;
		symbol = '-';
	}
	_putchar(symbol);
	return (count);
}

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Write a function that
 * checks for a digit (0 through 9).
 *
 * @c: takes int as a value
 *
 * Return: value of n
 */

int _isdigit(int c)
{
	int n;

	if (c >= '0' && c <= '9')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}

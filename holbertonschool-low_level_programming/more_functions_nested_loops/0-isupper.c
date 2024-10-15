#include "main.h"
#include <stdio.h>

/**
 * _isupper - Write a function that checks for uppercase character.
 *
 * @c: takes int as value
 *
 * Return: value of n
 */

int _isupper(int c)
{
	int n;

	if (c >= 'A' && c <= 'Z')
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}

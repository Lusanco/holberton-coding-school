#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check alphabetic character.
 *
 * @c: takes in a value for comparison.
 *
 * Return: c
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}

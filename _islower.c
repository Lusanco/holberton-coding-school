#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks lowercase
 *
 * @c: Takes in a letter
 *
 * Return: c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}

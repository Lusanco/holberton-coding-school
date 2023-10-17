#include "main.h"
#include <stdlib.h>

/**
 * _abs - compute the absolute value
 * of an integer
 *
 * @n: takes an integer
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

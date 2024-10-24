#include "main.h"

/**
 * _pow_recursion - Write a function
 * that returns the value of x raised
 * to the power of y.
 *
 * @x: takes int as argument for
 * being raise to the power of y.
 * @y: takes int as argument for
 * raising x to the power of y.
 *
 * Return: Value of x raised to the power o y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

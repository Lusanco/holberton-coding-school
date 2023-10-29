#include "main.h"

/**
 * squirt - Recursive helper function
 * to find the square root
 *
 * @n: integer for which to calculate the square root
 * @g: the current guess for the square root
 *
 * Return: the integer square root, or -1
 * if there's no natural square root
 */

int squirt(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	if (g * g > n)
	{
		return (-1);
	}
	return (squirt(n, g + 1));
}

/**
 * _sqrt_recursion - Function that returns
 * the natural square root of a number.
 *
 * @n: integer for which to calculate the square root
 *
 * Return: the integer square root, or -1 if n is
 * negative or if there's no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squirt(n, 1));
}

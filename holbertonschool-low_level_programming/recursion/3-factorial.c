#include "main.h"

/**
 * factorial - Write a function that returns
 * the factorial of a given number.
 *
 * @n: takes number of type int as argument.
 *
 * Return: Factorial of number.
 */

int factorial(int n)
{
	int result;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	result = n * factorial(n - 1);
	if (result < 0)
	{
		return (-1);
	}
	else
	{
		return (result);
}
}

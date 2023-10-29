#include "main.h"

/*
 * _sqrt_recursion - Function that returns
 * the natural square root of a number.
 *
 * @n: integer for which to calculate the square root
 *
 * Return: the integer square root,
 * or -1 if n is negative
 */

int _sqrt_recursion(int n)
{
	int start = 1;
	int end = n;
	int mid;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		
	}
	return (-1);
}

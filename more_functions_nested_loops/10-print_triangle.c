#include "main.h"

/**
 * print_triangle - Write a function that
 * prints a triangle, followed by a new line.
 *
 *@size: takes int as argument
 */

void print_triangle(int size)
{
	int a, b, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b <= size - a - 1; b++)
			{
				_putchar(' ');
			}
			for (z = 0; z < a; z++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

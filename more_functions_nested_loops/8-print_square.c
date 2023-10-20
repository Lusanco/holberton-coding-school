#include "main.h"

/**
 * print_square - 
 *
 * @size: take int as argument
 * for square to be printed.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		j = 0;

		while (j < size)
		{
			for (; i < size; i++)
			{
				_putchar('#');
			}
		_putchar('\n');
		i = 0;
		j++;
		}
	}
}

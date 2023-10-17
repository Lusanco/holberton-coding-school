#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the
 * 9 times table, starting with 0.
 */

void times_table(void)
{
	int fila;
	int columna;
	int total;

	for (fila = 0; fila <= 9; fila++)
	{
		for (columna = 0; columna <= 9; columna++)
		{
			total = fila * columna;
			if (columna == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (total < 10)
				{
					_putchar('0');
					_putchar(total + '0');
				}
				else
				{
					_putchar(total / 10 + '0');
					_putchar(total % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}

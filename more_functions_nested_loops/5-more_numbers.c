#include "main.h"

/**
 * more_numbers - Write a function that
 * prints 10 times the numbers, from 0
 * to 14, followed by a new line.
 */
void more_numbers(void)
{
	int a = -1;
	int b = 0;

	while (b < 10)
	{
		while (a < 14 && b <= 10)
		{
			a++;
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		if (a == 14)
		{
			b++;
			a = -1;
			_putchar('\n');
		}
	}
}

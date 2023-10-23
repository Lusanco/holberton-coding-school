#include "main.h"

/**
 * puts_half - Write a function that prints
 * half of a string, followed by a new line.
 *
 * @str: takes a pointer of type char.
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	if (i % 2 == 0)
	{
		for (j = i / 2; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

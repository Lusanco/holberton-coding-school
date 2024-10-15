#include "main.h"

/**
 * puts_half - Write a function that prints
 * half of a string, followed by a new line.
 *
 * @str: takes a pointer of type char.
 */

void puts_half(char *str)
{
	int i = 0, size;
	char letter;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	size = i;
	if (i % 2 == 0)
	{
		i = i / 2;
		i++;
	}
	else
	{
	i = ((i - 1) / 2);
	i++;
	}
	while (i <= size)
	{
		letter = str[i];
		_putchar(letter);
		i++;
	}
	_putchar('\n');
}

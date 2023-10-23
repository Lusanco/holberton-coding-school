#include "main.h"

/**
 * puts2 - Write a function that
 * prints every other character
 * of a string, starting with
 * the first character, followed
 * by a new line.
 *
 * @str: takes a string as argument.
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char a;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (; j <= i;)
	{
		a = str[j];
		_putchar(a);
		j++;
		j++;
	}
	_putchar('\n');
}

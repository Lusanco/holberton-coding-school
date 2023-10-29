#include "main.h"

/**
 * _strlen_recursion - Write a function that
 * returns the length of a string.
 *
 * @s: takes char 'string' as an argument.
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	return (i - 1);
}

#include "main.h"

/**
 * _strlen - Write a function that
 * returns the length of a string.
 *
 * @s: takes char as argument
 *
 * Return: returns the length
 * of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

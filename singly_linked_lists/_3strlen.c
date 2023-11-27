#include "lists.h"

/**
 * _3strlen - Write a function that
 * returns the length of a string.
 *
 * @s: takes char as argument
 *
 * Return: returns the length
 * of a string
 */

size_t _3strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

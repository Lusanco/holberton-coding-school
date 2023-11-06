#include "main.h"

/**
 * _strdup - function that returns a
 * pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: Takes string as argument.
 *
 * Return: NULL if str is NULL, and
 * return the copy of the string
 * if succesfull.
 */

char *_strdup(char *str)
{
	char *pointer;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(str));

	while (i <= sizeof(str))
	{
		pointer[i] = str[i];
		i++;
	}

	return (pointer);
}

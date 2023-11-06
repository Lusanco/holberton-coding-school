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
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	pointer = malloc((i++) * sizeof(char));

	while (j < (i + 1))
	{
		pointer[j] = str[j];
		j++;
	}

	return (pointer);
}

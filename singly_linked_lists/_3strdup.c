#include "lists.h"

/**
 * _3strdup - function that returns a
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

char *_3strdup(const char *str)
{
	char *pointer;
	size_t len, i;

	if (str == NULL)
		return (NULL);

	len = _3strlen(str);
	pointer = malloc((len + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		pointer[i] = str[i];
	return (pointer);
}

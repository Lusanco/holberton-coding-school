#include "main.h"

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: takes string as argument.
 * @s2: takes another string as argument for concatenation.
 *
 * Return: NULL on failure, Concatenated string on success.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int c, a = 0, b = 0;

	if (s1 != NULL)
	{
		a = strlen(s1);
	}

	if (s2 != NULL)
	{
		b = strlen(s2);
	}

	c = a + b;
	concat = malloc((c + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(concat, s1);
	}

	if (s2 != NULL)
	{
		strcat(concat, s2);
	}

	return (concat);
}

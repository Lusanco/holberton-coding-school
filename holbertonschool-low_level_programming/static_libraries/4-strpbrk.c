#include "main.h"

/**
 * _strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 *
 * @accept: takes char pointer to match
 * against original string.
 * @s: Original string char pointer.
 *
 * Return: a string or nul depending if
 * _strpbrk is true
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0, i = 0, k = 0;
	char *NUL = '\0';

	while (accept[i] != '\0')
	{
		i++;
	}
	while (s[k] != '\0')
	{
		while (j <= i)
		{
			if (accept[j] == s[k])
			{
			return (s + k);
			}
			j++;
		}
		j = 0;
		k++;
	}
	return (NUL);
}

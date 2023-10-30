#include "main.h"

/**
 * _strncat - Write a function that
 * concatenates two strings.
 *
 * @dest: takes pointer of type char.
 * @src: takes a pointer of type char.
 * @n: number of size bytes to
 * analyze before append.
 *
 * Return: Returns the appended values into dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	return (dest);
}

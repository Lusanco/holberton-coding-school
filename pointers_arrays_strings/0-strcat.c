#include "main.h"

/**
 * _strcat - Write a function that
 * concatenates two strings.
 *
 * @dest: takes pointer of type char.
 * @src: takes a pointer of type char.
 *
 * Return: Returns the appended values.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

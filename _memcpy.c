#include "main.h"

/**
 * _memcpy - Write a function that copies
 * memory area.
 *
 * @dest: takes argument of char pointer
 * to be modified for output.
 * @src: takes argument of char pointer that
 * @n:
 *
 * Return: returns copy of memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

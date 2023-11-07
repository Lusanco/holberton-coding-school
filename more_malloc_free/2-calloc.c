#include "main.h"

/**
 * _calloc - Function that allocates
 * memory for an array, using malloc.
 *
 * @nmemb: takes number of elements
 * in array as argument
 * @size: takes size in bytes of nmemb
 * as arguments
 *
 * Return: pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return (p);
}

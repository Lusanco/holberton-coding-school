#include "main.h"

/**
 * malloc_checked - Function that allocates
 * memory using malloc.
 *
 * @b: takes unsigned int as argument.
 *
 * Return: ptr.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	if (b <= 0)
	{
		exit(98);
	}

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

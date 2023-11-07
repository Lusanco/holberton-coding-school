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
	char *p;

	if (b <= 0)
	{
		exit(98);
	}

	p = malloc(sizeof(char) * b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

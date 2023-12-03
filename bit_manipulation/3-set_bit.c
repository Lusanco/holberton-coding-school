#include "main.h"

/**
 * set_bit - unction that sets the value of a
 * bit to 1 at a given index.
 *
 * @n: unsigned long int as argument
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error
 * occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index
		>= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= ((unsigned long int)1 << index);
	return (1);
}

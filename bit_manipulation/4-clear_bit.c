#include "main.h"

/**
 * clear_bit - Function that sets the value of
 * a bit to 0 at a given index.
 *
 * @n: unsigned long int as argument
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error
 * occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int my_mask = 1;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	my_mask <<= index;
	if ((*n & my_mask) != 0)
		*n ^= my_mask;
	return (1);
}

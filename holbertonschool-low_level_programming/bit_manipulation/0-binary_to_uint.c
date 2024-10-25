#include "main.h"

/**
 * binary_to_uint - Function that converts
 * a binary number to an unsigned int.
 *
 * @b: string of 0 and 1 chars
 *
 * Return: converted number, or 0 if there
 * is one or more chars in the string b
 * that is not 0 or 1 || b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		converted = (converted << 1)
			| (*b - '0');
		b++;
	}
	return (converted);
}

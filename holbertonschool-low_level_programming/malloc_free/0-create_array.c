#include "main.h"

/**
 * create_array - Function that creates
 * an array of chars, and initializes
 * it with a specific char.
 *
 * @size: takes unsigned int as argument.
 * @c: takes char as argument.
 *
 * Return: NULL if size = 0;
 * Pointer to array or
 * NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arrchar = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if ((arrchar == NULL) || (size == 0))
	{
		return (NULL);
	}
	while (i < size)
	{
		arrchar[i] = c;
		i++;
	}
	return (arrchar);
}

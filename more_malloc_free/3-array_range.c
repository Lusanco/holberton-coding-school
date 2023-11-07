#include "main.h"

/**
 * array_range - Function that
 * creates an array of integers.
 *
 * @min: takes min range of an
 * array of integers.
 * @max: takes max range of an
 * array of integers.
 *
 * Return: the pointer to the
 * newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(max - min + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min < max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}

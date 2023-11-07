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
	int i = 0, total;

	if (min > max)
	{
		return (NULL);
	}

	total = max - min + 1;
	arr = malloc(total * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	/*if (min == max)
	{
		arr[0] = min;
		return (arr);
	}*/

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}

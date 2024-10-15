#include "function_pointers.h"

/**
 * array_iterator - function that executes a
 * function given as a parameter on each
 * element of an array.
 *
 * @array: array pointer
 * @size: the size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL
		|| action == NULL
		|| size == 0)
	{
		return;
	}

	for (i = 0; i < size; ++i)
	{
		(*action)(array[i]);
	}
}

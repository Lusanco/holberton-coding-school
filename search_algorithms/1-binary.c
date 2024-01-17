#include "search_algos.h"

/**
 * binary_search - function that searches for a
 * value in a sorted array of integers using the
 * Binary search algorithm
 *
 * @array: pointer to the 1st elemente of the array
 * to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: On failure -1, On success value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

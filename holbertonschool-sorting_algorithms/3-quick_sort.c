#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers
 * in ascending order using the quick sort algorithm.
 *
 * @array: Array to be sorted.
 * @size: Size of the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * lomuto_partition - Lomuto partition scheme for Quick sort.
 *
 * @array: Array to be sorted.
 * @low: Low index of the partition.
 * @high: High index of the partition.
 * @size: Size of the array.
 *
 * Return: Return the index of the pivot after partitioning.
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	swap(&array[i + 1], &array[high]);
	if (array[high] != pivot)
		print_array(array, size);

	return (i + 1);
}

/**
 * swap - Function that swaps two integer values.
 *
 * @x: Pointer to the first value.
 * @y: Pointer to the second value.
 */

void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * quick_sort_recursive - Recursive function for quick sort.
 *
 * @array: The array to be sorted.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: Size of the array.
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

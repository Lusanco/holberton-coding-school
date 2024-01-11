#include "sort.h"

/**
 * lomuto - Lomuto partition scheme for Quick sort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 *
 * Return: The index of the pivot.
 */

size_t lomuto(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot, temporary;
	ssize_t i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temporary = array[i];
			array[i] = array[j];
			array[j] = temporary;
			print_array(array, size);
		}
	}
	temporary = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temporary;
	print_array(array, size);
	return (i + 1);
}

/**
 * sort_recursive - Recursive function for Quick sort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 */

void sort_recursive(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t pivot;

	if (low < high)
	{
		pivot = lomuto(array, low, high, size);
		sort_recursive(array, low, pivot - 1, size);
		sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers
 * in ascending order using the Quick sort
 * algorithm with Lomuto partition scheme.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_recursive(array, 0, size - 1, size);
}

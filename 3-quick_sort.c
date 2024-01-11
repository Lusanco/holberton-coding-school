#include "sort.h"

size_t median_of_medians(int *array, ssize_t low, ssize_t high);
size_t lomuto(int *array, ssize_t low, ssize_t high, size_t pivot_index);
void sort_recursive(int *array, ssize_t low, ssize_t high);

/**
 * lomuto - Lomuto partition scheme for Quick sort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @pivot_index: The index of the pivot.
 *
 * Return: The index of the pivot.
 */
size_t lomuto(int *array, ssize_t low, ssize_t high, size_t pivot_index)
{
    int pivot, temporary;
    ssize_t i, j;

    pivot = array[pivot_index];
    array[pivot_index] = array[high];
    array[high] = pivot;
    i = low - 1;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temporary = array[i];
            array[i] = array[j];
            array[j] = temporary;
        }
    }

    temporary = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temporary;

    return (i + 1);
}

/**
 * median_of_medians - Find the median of medians in the array.
 *
 * @array: The array to find the median from.
 * @low: The starting index of the array.
 * @high: The ending index of the array.
 *
 * Return: The index of the median of medians.
 */
size_t median_of_medians(int *array, ssize_t low, ssize_t high)
{
    size_t subarray_size = high - low + 1;

    if (subarray_size <= 5)
    {
        /* Sort small subarrays using insertion sort */
        insertion_sort(array + low, subarray_size);
        return low + subarray_size / 2;
    }

    /* Divide the array into subarrays of size 5 */
    for (ssize_t i = low; i <= high; i += 5)
    {
        ssize_t subarray_high = i + 4;
        if (subarray_high > high)
            subarray_high = high;
        size_t median = median_of_medians(array, i, subarray_high);
        swap(&array[median], &array[low + (i - low) / 5]);
    }

    /* Recursively find the median of medians */
    return median_of_medians(array, low, low + (subarray_size - 1) / 5);
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
    sort_recursive(array, 0, size - 1);
}

/**
 * sort_recursive - Recursive function for Quick sort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 */
void sort_recursive(int *array, ssize_t low, ssize_t high)
{
    if (low < high)
    {
        /* Choose pivot using median-of-medians */
        size_t pivot_index = median_of_medians(array, low, high);

        /* Partition the array using Lomuto scheme with the selected pivot */
        size_t new_pivot_index = lomuto(array, low, high, pivot_index);

        /* Recursively sort the two partitions */
        sort_recursive(array, low, new_pivot_index - 1);
        sort_recursive(array, new_pivot_index + 1, high);
    }
}

/**
 * insertion_sort - Sorts a small array using the Insertion Sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void insertion_sort(int *array, size_t size)
{
    size_t i, j;
    int key;

    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i;

        while (j > 0 && array[j - 1] > key)
        {
            array[j] = array[j - 1];
            j--;
        }

        array[j] = key;
    }
}

/**
 * swap - Swaps two elements in an array.
 *
 * @a: Pointer to the first element.
 * @b: Pointer to the second element.
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

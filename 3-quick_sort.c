#include "sort.h"

/**
 * lomuto - Lomuto partition scheme for Quick sort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 *
 * Return: The index of the pivot.
 */
size_t lomuto(int *array, ssize_t low, ssize_t high)
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
        }
    }

    temporary = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temporary;

    return (i + 1);
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
    ssize_t pivot;

    if (low < high)
    {
        pivot = lomuto(array, low, high);
        sort_recursive(array, low, pivot - 1);
        sort_recursive(array, pivot + 1, high);
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
    sort_recursive(array, 0, size - 1);
}

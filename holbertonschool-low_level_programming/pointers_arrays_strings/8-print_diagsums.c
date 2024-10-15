#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the
 * sum of the two diagonals of a square matrix of
 * integers.
 *
 * @a: takes int pointer as argument. 2darray.
 * @size: takes int as argument. Size of matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + (i * size +
			(size - i - 1)));
	}
	printf("%d, %d\n", sum1, sum2);
}

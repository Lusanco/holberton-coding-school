#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n
 * elements of an array of integers,
 * followed by a new line.
 *
 * @a: pointer a of type int
 * @n: takes n as argument int
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
	}
	printf("\n");
}

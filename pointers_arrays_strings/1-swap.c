#include "main.h"

/**
 * swap_int - Write a function that
 * swaps the values of two integers.
 *
 * @a: first swappable int
 * @b: second swappable int
 */

void swap_int(int *a, int *b)
{
	int y = *a;
	int x = *b;

	*a = x;
	*b = y;
}

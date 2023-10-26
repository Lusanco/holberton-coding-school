#include "main.h"

/**
 * print_chessboard- Write a function that
 * prints the chessboard.
 *
 * @a: takes a two dimensional pointer array.
 */

void print_chessboard(char (*a)[8])
{
	char c;
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			c = a[i][j];
			_putchar(c);
		}
		_putchar('\n');
	}
}

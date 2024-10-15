#include "main.h"

/**
 * alloc_grid - Function tha
 * returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: size of width
 * @height: size of height
 *
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arr2d;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr2d = malloc(height * sizeof(int *));

	if (arr2d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr2d[i] = malloc(width * sizeof(int));

		if (arr2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr2d[j]);
			}
			free(arr2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr2d[i][j] = 0;
	}
	return (arr2d);
}

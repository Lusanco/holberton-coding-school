#include "header.h"

/**
 * free_iterator - Free the memory
 * allocated in NULL terminated
 * arrays.
 *
 * array: Array to be freed.
 */

void free_iterator(char **array)
{
	int i;

	if (array == NULL)
		return;
	for (i = 0; array[i] != NULL; i++)
	{
		free(array[i]);
		array[i] = NULL;

	}
	free(array);
}

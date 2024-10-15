#include "header.h"

/**
 * no_line - Remove newline character from the
 * end of the string
 *
 * @str: input string
 * @bytes: pointer to the number of bytes read
 */

void no_line(char **str, ssize_t *bytes)
{
	if ((*str)[strlen(*str) - 1] == '\n')
	{
		(*str)[strlen(*str) - 1] = '\0';
		(*bytes)--;
	}
}

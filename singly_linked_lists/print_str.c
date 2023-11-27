#include "lists.h"

/**
 * print_str - Prints a string
 * @str: The string to print
 */

void print_str(const char *str)
{
	if (str == NULL)
		return;
	while (*str)
	{
		putchar(*str);
		str++;
	}
}

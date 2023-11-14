/*
 * 1. To be is to be the value
 * of a variable
 *
 * Write a function that prints
 * numbers, followed by a new line.
 *
 * Prototype
 *
 * void print_numbers
 * (const char *separator,
 * const unsigned int n, ...);
 *
 * where separator is the string to
 * be printed between numbers
 *
 * and n is the number of integers
 * passed to the function
 *
 * You are allowed to use printf
 *
 * If separator is NULL,
 * don’t print it
 *
 * Print a new line at the end of
 * your function
 *
 * Expected Output
 *
 * julien@ubuntu:~/0x0f. variadic
 * functions$ gcc -Wall -pedantic
 * -Werror -Wextra -std=gnu89
 *  1-main.c 1-print_numbers.c -o b
 * julien@ubuntu:~/0x0f. variadic
 * functions$ ./b
 * 0, 98, -1024, 402
 * julien@ubuntu:~/0x0f. variadic
 * functions$
 */

#include "variadic_functions.h"

/**
 * print_numbers - function that
 * prints numbers, followed by
 * a new line.
 *
 * @separator: is the string to be
 * printed between numbers
 * @n: unsigned int passes as arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (n == 0)
	{
		printf("\n");
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator
			!= NULL
			&& i
			!= n - 1)
		{
			printf(
			"%d%s",
			va_arg
			(args,
			int),
			separator);
		}
		else
		{
			printf(
			"%d",
			va_arg
			(args,
			int));
		}
	}

	va_end(args);
	printf("\n");
}

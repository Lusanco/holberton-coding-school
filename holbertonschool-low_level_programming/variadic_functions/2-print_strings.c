/*
 * 2. One woman's constant is
 * another woman's variable
 *
 * Write a function that prints
 * strings, followed by a new line.
 *
 * Prototype
 *
 * void print_strings
 * (const char *separator,
 * const unsigned int n, ...);
 *
 * where separator is the string to
 * be printed between the strings
 *
 * and n is the number of strings
 * passed to the function
 *
 * You are allowed to use printf
 *
 * If separator is NULL,
 * don’t print it
 *
 * If one of the string is NULL,
 * print (nil) instead
 *
 * Print a new line at the end
 * of your function
 *
 * Expected Output
 *
 * julien@ubuntu:~/0x0f. Variadic
 * functions$ gcc -Wall -pedantic
 * -Werror -Wextra -std=gnu89
 *  2-main.c 2-print_strings.c -o c
 *  julien@ubuntu:~/0x0f. Variadic
 *  functions$ ./c
 *  Jay, Django
 *  julien@ubuntu:~/0x0f. Variadic
 *  functions$
 */

#include "variadic_functions.h"

/**
 * print_strings - Function that
 * prints strings, followed by
 * a new line.
 *
 * @separator: string to be printed
 * between the strings
 * @n: number of strings passed to
 * the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args,
			char *);
		if (separator
		!= NULL && i
		!= n - 1)
		{
			if (p
			!= NULL)
			{
				printf("%s%s", p, separator);
			}
			else
			{
				printf("(nil)%s", separator);
			}
		}
		else
		{
			if (p
			!= NULL)
			{
				printf("%s", p);
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	va_end(args);
	printf("\n");
}

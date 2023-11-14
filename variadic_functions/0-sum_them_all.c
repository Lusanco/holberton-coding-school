/*
 * 0. Beauty is variable, ugliness
 * is constant.
 *
 * Write a function that returns
 * the sum of all its parameters.
 *
 * Prototype
 *
 * int sum_them_all
 * (const unsigned int n, ...);
 *
 * If n == 0, return 0
 *
 * Expected Output
 *
 * julien@ubuntu:~/0x0f. variadic
 * functions$ gcc -Wall -pedantic
 * -Werror -Wextra -std=gnu89
 * 0-main.c 0-sum_them_all.c -o a
 * julien@ubuntu:~/0x0f. variadic
 * functions$ ./a
 * 1122
 * 500
 * julien@ubuntu:~/0x0f. variadic
 * functions$
 */

#include "variadic_functions.h"

/**
 * sum_them_all - Function that
 * returns the sum of all its
 * parameters.
 *
 * @n: type of parameter to be
 * passed. unsigned int.
 *
 * Return: The sum of all
 * numbers passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;

/*
 * Declares args of type va_list.
 * Holds list of arguments.
 */
	va_list args;

/* If n == 0, return 0 */
	if (n == 0)
	{
		return (0);
	}

/*
 * initializes args (va_list).
 * Point to the first argument
 * after named parameter (n).
 */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{

/* Store sum of arguments */
		x += va_arg(args, int);
	}

/*
 * Clean up args (va_list) after
 * all arguments been processed.
 */
	va_end(args);
	return (x);
}

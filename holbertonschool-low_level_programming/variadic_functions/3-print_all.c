/*
 * Write a function that
 * prints anything.
 *
 * Prototype
 *
 * void print_all
 * (const char *
 * const format, ...);
 *
 * where format is a list of types
 * of arguments passed to the
 * function
 *
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is
 * NULL, print (nil) instead
 *
 * any other char should be ignored
 *
 * You are not allowed to use for,
 * goto, ternary operator, else,
 * do ... while
 *
 * You can use a maximum of
 * 2 while loops
 * 2 if
 *
 * You can declare a maximum
 * of 9 variables
 *
 * You are allowed to use printf
 *
 * Print a new line at the end
 * of your function
 *
 * julien@ubuntu:~/0x0f. Variadic
 * functions$ gcc -Wall -pedantic
 * -Werror -Wextra -std=gnu89
 * 3-main.c 3-print_all.c -o d
 * julien@ubuntu:~/0x0f. Variadic
 * functions$ ./d
 * B, 3, stSchool
 * julien@ubuntu:~/0x0f. Variadic
 * functions$
 */

#include "variadic_functions.h"

/**
 * print_all - function that
 * prints anything.
 *
 * @format: list of types of
 * arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, c;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's')
			&& format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

#include "main.h"

/**
 * _printf - Replica of the standard library
 * function of the same name.
 *
 * @format: Takes as argument a const char pointer.
 *
 * Return: If NULL, -1. Else, printedChars.
 */

int _printf(const char *format, ...)
{
	int printedChars = 0;
	va_list argList;

	va_start(argList, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{

		if (*format != '%')
		{
			write(1, format, 1);
			printedChars++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				write(1, "(null)", _strlen("(null)"));
				printedChars += _strlen("(null)");
			}
			if (*format == 's'
			|| *format == 'c'
			|| *format == '%')
				charFormat(*format, argList, &printedChars);
			if (*format == 'd'
			|| *format == 'i')
				numFormat(*format, argList, &printedChars);
		}
		format++;
	}
	va_end(argList);
	return (printedChars);
}

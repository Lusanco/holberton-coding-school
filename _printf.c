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
	/*unsigned int unum;*/
	va_list argList;

	va_start(argList, format);

	if (format == NULL)
		write(1, "(null)", _strlen("(null)"));
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
				break;
			if (*format == 's'
			|| *format == 'c'
			|| *format == '%')
				charFormat(*format, argList, &printedChars);
			if (*format == 'd'
			|| *format == 'i')
				numFormat(*format, argList, &printedChars);
			/*if (*format == 'b')*/
			/*{*/
			/*	unum = va_arg(argList, unsigned int);*/
			/*	binaryFormat(unum, &printedChars);*/
			/*}*/
		}
		format++;
	}
	va_end(argList);
	return (printedChars);
}

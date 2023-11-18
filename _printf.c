#include "main.h"

/**
 * print_format - Helper function to print
 * based on format specifier.
 *
 * @format: Format specifier character.
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 *
 * Return: None.i
 */

static void print_format(char format, va_list argList, int *printedChars)
{
	char c, *s, digit;
	int num, divisor;

	switch (format)
	{
	case '%':
		write(1, &format, 1);
		(*printedChars)++;
		break;
	case 'c':
		c = va_arg(argList, int);
		write(1, &c, 1);
		(*printedChars)++;
		break;
	case 's':
		s = va_arg(argList, char*);
		if (s != NULL)
		{
			write(1, s, _strlen(s));
			*printedChars += _strlen(s);
		}
		else
		{
			write(1, "(null)", _strlen("(null)"));
			*printedChars += _strlen("(null)");
		}
		break;
	case 'd':
	case 'i':
		num = va_arg(argList, int);
		divisor = 1;
		if (num < 0)
		{
			write(1, "-", 1);
			(*printedChars)++;
			num = -num;
		}
		while (num / divisor > 9)
			divisor *= 10;
		while (divisor != 0)
		{
			digit = '0' + num / divisor;
			write(1, &digit, 1);
			(*printedChars)++;
			num %= divisor;
			divisor /= 10;
		}
		break;
	default:
		break;
	}
}

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
				break;
			print_format(*format, argList, &printedChars);
		}
		format++;
	}
	va_end(argList);
	return (printedChars);
}

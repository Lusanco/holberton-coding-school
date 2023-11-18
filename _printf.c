#include "main.h"

int _printf(const char *format, ...)
{
	int printedChars = 0;
	char c, *s = NULL;

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
			if (*format == '%')
			{
				write(1, format, 1);
				printedChars++;
			}
			if (*format == 'c')
			{
				c = va_arg(argList, int);
				write(1, &c, 1);
				printedChars++;
			}
			if (*format == 's')
			{
				s = va_arg(argList, char*);
				if (s != NULL)
				{
					write(1, s, _strlen(s));
					printedChars += _strlen(s);
				}
				else
				{
					write(1, "(null)", _strlen("(null)"));
					printedChars += strlen("(null)");
				}
			}
		}
		format++;
	}
	va_end(argList);
	return(printedChars);
}

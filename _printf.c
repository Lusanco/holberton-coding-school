#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;
	char current_char;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		current_char = format[i];
		count += write(1, &current_char, 1);
	}
	va_end(args);
	return (count);
}

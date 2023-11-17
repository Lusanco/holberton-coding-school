#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;
	char current_char, temp;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		current_char = format[i];

		if (current_char == '%' && format[i + 1] != '\0')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					temp = va_arg(args, int);
					count += write(1, &temp, 1);
					break;
				case 's':
					count += write(1, va_arg(args, char *), 1);
					break;
				default:
					count += write(1, "%", 1);
					count += write(1, &format[i], 1);
					break;
			}
		}
		else
		{
			count += write(1, &current_char, 1);
		}
	}
	va_end(args);
	return (count);
}

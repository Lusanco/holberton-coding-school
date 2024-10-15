#include "main.h"

/**
 * oFormat - o format specifier.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void oFormat(va_list argList, int *printedChars)
{
	unsigned int num = va_arg(argList, unsigned int);
	char octal[12];
	int i = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		(*printedChars)++;
	}
	else
	{
		while (num > 0)
		{
			octal[i] = num % 8 + '0';
			num = num / 8;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			write(1, &octal[i], 1);
			(*printedChars)++;
		}
	}
}

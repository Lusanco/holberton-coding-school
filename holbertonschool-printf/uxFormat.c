#include "main.h"

/**
 * XFormat - X format specifier.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void XFormat(va_list argList, int *printedChars)
{
	unsigned int num = va_arg(argList, unsigned int);
	char hex[12];
	int remainder, i = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		(*printedChars)++;
	}
	else
	{
		while (num > 0)
		{
			remainder = num % 16;
			hex[i] = (remainder < 10)
			? remainder + '0'
			: remainder - 10 + 'A';
			num = num / 16;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			write(1, &hex[i], 1);
			(*printedChars)++;
		}
	}
}

#include "main.h"

/**
 * uFormat - u format specifier.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void uFormat(va_list argList, int *printedChars)
{
	unsigned int num = va_arg(argList, unsigned int);
	unsigned int divisor = 1;
	char digit;

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
}

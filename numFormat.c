#include "main.h"

/**
 * numFormat - Helper function to print
 * based on format specifier.
 *
 * @format: Format specifier character.
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void numFormat(char format, va_list argList, int *printedChars)
{
	int num, divisor;
	char digit;

	switch (format)
	{
		case 'd':
		case 'i':
			num = va_arg(argList, int);
			divisor = 1;
			if (num == INT_MIN)
			{
				write(1, "-", 1);
				(*printedChars)++;
				num = -(num + 1);
			}
			else if (num < 0)
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

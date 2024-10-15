#include "main.h"

/**
 * nFormat - number format specifiers.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void nFormat(va_list argList, int *printedChars)
{
	int num, divisor;
	char digit;

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
	if (num == 0)
	{
		write(1, "0", 1);
		(*printedChars)++;
	}
	else
	{
		while (num / divisor > 9)
			divisor *= 10;
		while (divisor != 0)
		{
			digit = '0' +
			num / divisor;
			write(1, &digit, 1);
			(*printedChars)++;
			num %= divisor;
			divisor /= 10;
		}
	}
}

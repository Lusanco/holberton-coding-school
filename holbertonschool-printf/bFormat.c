#include "main.h"
/**
 * bFormat - b format specifier.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void bFormat(va_list argList, int *printedChars)
{
	unsigned int num = va_arg(argList, unsigned int);
	unsigned int binary[32];
	int i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		write(1, (binary[i] == 1) ? "1" : "0", 1);
		(*printedChars)++;
	}
}

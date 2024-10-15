#include "main.h"

/**
 * cFormat - c format specifier.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void cFormat(va_list argList, int *printedChars)
{
	char c = va_arg(argList, int);

	write(1, &c, 1);
	(*printedChars)++;
}

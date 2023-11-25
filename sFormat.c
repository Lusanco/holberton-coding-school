#include "main.h"

/**
 * sFormat - s format specifier.
 *
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void sFormat(va_list argList, int *printedChars)
{
	char *s = va_arg(argList, char*);

	if (s != NULL)
	{
		write(1, s, _strlen(s));
		*printedChars += _strlen(s);
	}
	else
	{
		write(1, "(null)", _strlen("(null)"));
		*printedChars += _strlen("(null)");
	}
}

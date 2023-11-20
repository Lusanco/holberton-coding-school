#include "main.h"

/**
 * charFormat - Helper function to print
 * based on format specifier.
 *
 * @format: Format specifier character.
 * @argList: va_list for variable arguments.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void charFormat(char format, va_list argList, int *printedChars)
{
	switch (format)
	{
		char c, *s;

	case '%':
		write(1, &format, 1);
		(*printedChars)++;
		break;
	case 'c':
		c = va_arg(argList, int);
		write(1, &c, 1);
		(*printedChars)++;
		break;
	case 's':
		s = va_arg(argList, char*);
		if (s != NULL)
		{
			write(1, s, _strlen(s));
			*printedChars += _strlen(s);
		}
		else
		{
			/*write(1, "(null)", _strlen("(null)"));*/
			/**printedChars += _strlen("(null)");*/
			return (-1);
		}
		break;
	default:
		break;
	}
}

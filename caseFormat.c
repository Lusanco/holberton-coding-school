#include "main.h"

/**
 * caseFormat - function that hold logic of other functions
 *
 * @format: Format specifier character
 * @argList: va_list for variable arguments
 * @printedChars: Pointer to the variable
 * holding the count of the printed characters
 */

void caseFormat(char format, va_list argList, int *printedChars)
{
	switch (format)
	{
		case '\0': case 's': case 'c': case '%':
			charFormat(format, argList,
			printedChars);
			break;
		case 'd': case 'i':
			numFormat(format, argList,
			printedChars);
			break;
		default:
			write(1, &format, 1);
			(*printedChars)++;
			break;
	}
}

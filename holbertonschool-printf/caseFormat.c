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
		case 's':
			sFormat(argList, printedChars);
			break;
		case 'c':
			cFormat(argList, printedChars);
			break;
		case '%':
			percentFormat(format, printedChars);
			break;
		case 'd': case 'i':
			nFormat(argList, printedChars);
			break;
		case 'b':
			bFormat(argList, printedChars);
			break;
		case 'u':
			uFormat(argList, printedChars);
			break;
		case 'o':
			oFormat(argList, printedChars);
			break;
		case 'x':
			xFormat(argList, printedChars);
			break;
		case 'X':
			XFormat(argList, printedChars);
			break;
		default:
			write(1, &format, 1);
			(*printedChars)++;
			break;
	}
}

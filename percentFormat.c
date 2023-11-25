#include "main.h"

/**
 * percentFormat - % format specifier.
 *
 * @format: Format specifier character.
 * @printedChars: Pointer to the variable
 * holding the count of printed characters.
 */

void percentFormat(char format, int *printedChars)
{
	write(1, &format, 1);
	(*printedChars)++;
}

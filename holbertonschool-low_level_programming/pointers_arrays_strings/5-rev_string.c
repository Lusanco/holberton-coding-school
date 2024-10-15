#include "main.h"
/**
 * rev_string - Write a function that
 * reverses a string.
 *
 * @s: takes a char as argument.
 */

void rev_string(char *s)
{
	int i, j, end;
	char temp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	end = i;
	j = i / 2;
	i = 0;
	while (i <= j)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		i++;
		end--;
	}
}

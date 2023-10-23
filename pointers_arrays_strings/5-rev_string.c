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
	char temp[10];

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	end = i;
	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}
	i = 0;
	j = 0;
	while (i <= end)
	{
		s[i] = temp[j];
		i++;
		j++;
	}
}

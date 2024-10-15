#include "main.h"

/**
 * cap_string - Capitalize all words in a
 * string based on separators.
 *
 * @str: The input string.
 *
 * Return: The modified string.
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;
	int capitalize_next = 1;

	while (str[i])
	{
		int is_separator = 0;
		int j = 0;

		for (; separators[j]; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}
		if (is_separator)
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') &&
				(i == 0 || str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == '.'))
			{
				str[i] = str[i] - 32;
				capitalize_next = 0;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

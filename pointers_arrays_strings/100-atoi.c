#include "main.h"

/**
 * _atoi - Write a function that
 * convert a string to an integer.
 *
 * @s: takes string as input.
 *
 * Return: an integer.
 */

int _atoi(char *s)
{
	int i, j, k, l, m;

	i = 0;
	m = 1;
	l = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			m = -m;
		}
		else if (s[i] == '+')
		{
			m = 1;
		}
		i++;
	}
	j = i;
	while (s[j] >= '0' && s[j] <= '9')
	{
		j++;
	}
	for (k = j; k >= i; k--)
	{
		l = l * 10 + (s[k] - '0');
	}
	return (l * m);
}

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
	int i = 0, j = 0, res = 0;
	int sig = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == '-')
		{
			sig *= -1;
		}
		if (s[j] >= '0' && s[j] <= '9')
		{
			res = res * 10 + (s[j] - '0');
			if (s[j + 1] < '0' || s[j + 1] > '9')
			{
				j = i + 1;
			}
		}
	}
	return (res * sig);
}

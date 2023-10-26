#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 *
 * @needle: Argument pointer char string
 * to find the other string
 * @haystack: Argument pointer char to be scanned
 *
 * Return: a string or nul depending if is true
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0, i = 0, k = 0, cutindex;
	char *myNULL = '\0';

	while (needle[i] != '\0')
	{
		i++;
	}
	while (haystack[k] != '\0')
	{
		while (j <= i)
		{
			if (needle[j] == haystack[k])
			{
				cutindex = k;
				while (needle[j] == haystack[k])
				{
					j++;
					k++;
					if (j == i && needle[j] == haystack[k])
					{
						return (haystack + cutindex);
					}
					else if (j == i)
					{
						return (myNULL);
					}
				}
			}
			else
			{
				j = 0;
				k++;
			}
			j = 0;
		}
	}
	return (myNULL);
}

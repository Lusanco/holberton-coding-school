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
	char *myHaystack = haystack, *myNeedle = needle;

	while (*haystack)
	{
		while (*haystack == *myNeedle && *myNeedle != 0 && *haystack != 0)
		{
			haystack++;
			myNeedle++;
		}
		if (*myNeedle == 0)
		{
			return (myHaystack);
		}
		haystack = ++myHaystack;
	}
	return (0);
}

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
	char *myHaystack = haystack;
	char *myNeedle = needle;
	char *myNULL = 0;
	char *tempHaystack = myHaystack;

	while (*myHaystack)
	{
		tempHaystack = myHaystack;
		myNeedle = needle;
		while (*myHaystack &&
			*myNeedle &&
			(*myHaystack ==
			 *myNeedle))
		{
			myHaystack++;
			myNeedle++;
		}
		if (!*myNeedle)
		{
			return (tempHaystack);
		}
		myHaystack = tempHaystack + 1;
	}
	return (myNULL);
}

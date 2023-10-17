#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks lowercase
 */

int _islower(int c)
{
	if (islower(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}

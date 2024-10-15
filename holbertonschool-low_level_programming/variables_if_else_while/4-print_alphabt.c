#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0
 */

int main(void)
{
	char abz;

	for (abz = 'a'; abz <= 'z'; abz++)
	{
		if (abz != 'q' && abz != 'e')
		{
			putchar(abz);
		}
	}
	putchar('\n');
	return (0);
}

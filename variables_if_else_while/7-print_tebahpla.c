#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char abz;
        for (abz = 'z'; abz >= 'a'; abz--)
	{
		putchar(abz);
	}

	putchar('\n');
	return (0);
}

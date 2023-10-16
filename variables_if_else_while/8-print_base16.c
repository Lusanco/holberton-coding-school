#include <stdio.h>

/**
 * main - print numbers of base 16
 * in lower case
 *
 * Return: 0
 */

int main(void)
{
	char myHex;

	for (myHex = '0'; myHex <= '9'; myHex++)
	{
		putchar(myHex);
	}
	for (myHex = 'a'; myHex <= 'f'; myHex++)
	{
		putchar(myHex);
	}
	putchar('\n');
	return (0);
}

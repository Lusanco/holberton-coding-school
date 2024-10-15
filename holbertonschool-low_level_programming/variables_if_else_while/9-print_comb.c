#include <stdio.h>
/**
 * main - prints all possible
 * combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int comb;

	for (comb = 0; comb <= 9; comb++)
	{
		putchar(comb + '0');
		if (comb <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

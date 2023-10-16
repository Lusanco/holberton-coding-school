#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit
 * of a random generated number
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastN = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastN);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastN);
	}
	return (0);
}

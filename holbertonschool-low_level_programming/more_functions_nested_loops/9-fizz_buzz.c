#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0 && a != 100)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0 && a != 100)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0 && a != 100)
		{
			printf("Buzz ");
		}
		else if (a == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}

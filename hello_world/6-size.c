#include <stdio.h>

/**
 * main - Prints size of
 * various types on the
 * computer it is compiled
 * and run on.
 * Return: 0
 */

int main(void)

{
	/*Variables*/
	int myInt;
	float myFloat;
	long myLong;
	long long int myLolong;
	char myChar;

	printf("Size of a char: %zu bytes(s)\n", sizeof(myChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(myLong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(myLolong));
	printf("Size of a float: %zu byte(s)\n", sizeof(myFloat));

	return (0);
}

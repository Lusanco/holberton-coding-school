#include <stdio.h>

/**
 * main - Program that prints
 * the number of arguments
 * passed into it.
 *
 * @argc: Argument count.
 * @argv: Arguments, unused.
 *
 * Return: 0 if succesfully.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

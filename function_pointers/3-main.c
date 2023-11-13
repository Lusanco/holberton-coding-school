#include "3-calc.h"

/**
 * main - entry point of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 for wrong
 * number of arguments, 99 for invalid
 * operator, 100 for division by 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	result = (*get_op_func(operator))(num1, num2);

	printf("%d\n", result);
	return (0);
}

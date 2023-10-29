#include "main.h"

/**
 * primeCalc - Recursive function to check if
 * a number is prime.
 *
 * @n: Integer to be checked.
 * @divi: The current divisor
 * to check if n is divisible by.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int primeCalc(int n, int divi)
{
	if (divi == 1)
	{
		return (1);
	}
	if (n % divi == 0)
	{
		return (0);
	}
	return (primeCalc(n, divi - 1));
}

/**
 * is_prime_number - Function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: takes int as argument.
 *
 * Return: 1 for prime, 0 for not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primeCalc(n, n - 1));
}

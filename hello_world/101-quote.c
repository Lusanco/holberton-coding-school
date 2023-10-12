#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Print followed by
 * new line, to the standard
 * error.
 * Return: 1
 */

int main(void)

{
	char msg[] = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, strlen(msg));
	return (1);
}

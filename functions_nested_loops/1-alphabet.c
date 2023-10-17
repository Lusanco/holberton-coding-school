#include <stdio.h>
/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
        char abz;

        for (abz = 'a'; abz <= 'z'; abz++)
        {
                putchar(abz);
        }
        putchar('\n');
        return;
}

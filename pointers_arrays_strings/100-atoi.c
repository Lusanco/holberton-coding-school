#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The input string.
 *
 * Return: The integer value or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
    int i = 0, res = 0;
    int sig = 1;
    int found_digit = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-' && !found_digit)
            sig *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            found_digit = 1;
            if (res > (2147483647 - (s[i] - '0')) / 10)
            {
                if (sig == 1)
                    return 2147483647;
                else
                    return -2147483648;
            }
            res = res * 10 + (s[i] - '0');
        }
        else if (found_digit)
            break;
        i++;
    }

    return res * sig;
}

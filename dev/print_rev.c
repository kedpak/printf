#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void print_rev(char *s)
{
        int i;

        i = 0;
        while (s[i] != '\0')
        {
                i++;
        }
        i = i - 1;
        while (i >= 0)
        {
                _putchar(s[i]);
                i--;
        }
}

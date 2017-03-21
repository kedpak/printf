#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - print characters
 * @ch: input characters
 * Return: printout of character
 */
int _putchar(char ch)
{
        return (write(1, &ch, 1));
}

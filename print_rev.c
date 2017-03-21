#include <unistd.h>
#include "holberton.h"
/**
 * print_rev - print reverse with the use of _putchar
 * @s: string to be reversed
 * Return: On success 1.
 */
int print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	j = i;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (j);
}

#include <stdarg.h>
#include "holberton.h"

/**
 * p_rev - take argument string and use print reverse string to reverse
 * @ap: argument list given
 * Return: N/A void function
 */

int p_rev(va_list ap)
{
	int length = 0, chars = 0;
	char *s;

	s = (va_arg(ap, char *));
	length = _strlen(s);
	if (length == 1)
	{
		_putchar(s[0]);
		return (1);
	}
	chars = length;
	length--;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	return (chars);
}

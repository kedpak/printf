#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * p_string - print a string arg with use of _putchar function
 * @ap: argument list given
 * Return: N/A void function
 */

int p_string(va_list ap)
{
	char *string;
	unsigned int i, length;

	string = va_arg(ap, char *);
	if (string == NULL || ((char *)0))
		string = "(null)";
	length = _strlen(string);
	for (i = 0; i < length; i++)
	{
		_putchar(string[i]);
	}
	return (length);
}

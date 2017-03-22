#include <stdarg.h>
#include "holberton.h"

/**
 * p_rev - take argument string and use print reverse string to reverse
 * @ap: argument list given
 * Return: N/A void function
 */

void p_rev(va_list ap)
{
	if (ap == NULL)
	{
		return (NULL);
	}
	print_rev(va_arg(ap, char *));
}

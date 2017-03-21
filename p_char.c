#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_char - takes arg from args list and uses _putchar function
 * @ap: args list 
 *
 * Return: N/A, void function
 */

int p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

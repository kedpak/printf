#include <stdarg.h>
#include "holberton.h"

/**
 * p_rot13 - print string in rot13 format
 * @ap: number to print
 * Return: N/A, void function
 */

void p_rot13(va_list ap)
{
	rot13(va_arg(ap, char *));
}

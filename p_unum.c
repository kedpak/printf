#include "holberton.h"

/**
 * p_unum - take unsigned number arg and use print number function
 * @ap: argument list given
 * Return: N/A, void function
 */

int p_unum(va_list ap)
{
	return (print_unumber(va_arg(ap, unsigned int)));
}

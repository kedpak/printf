#include "holberton.h"

/**
 * p_unum - take unsigned number arg and use print number function
 * @ap: argument list given
 * Return: N/A, void function
 */

void p_unum(va_list ap)
{
	print_unumber(va_arg(ap, unsigned int));
}

#include <stdarg.h>
#include "holberton.h"

/**
 * p_num - take signed number arg and use print number function
 * @ap: argument list given
* Return: N/A void function
*/

int p_num(va_list ap)
{
	return (print_number(va_arg(ap, int)));
}

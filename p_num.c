#include <stdarg.h>
#include "holberton.h"

/**
 * p_num - take signed number arg and use print number function
 * @ap: argument list given
* Return: N/A void function
*/

void p_num(va_list ap)
{
	print_number(va_arg(ap, int));
}

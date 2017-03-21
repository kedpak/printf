#include <stdarg.h>
#include "holberton.h"

/**
 * p_num - print numbers
 * @ap: input numbers
 * Return: void
 */
void p_num(va_list ap)
{
        print_number(va_arg(ap, int));
}

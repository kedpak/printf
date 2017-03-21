#include <stdarg.h>
#include "holberton.h"

/**
 * p_rev - print string in reverse
 * @ap: input string
 * Return: void
 */
void p_rev(va_list ap)
{
        print_rev(va_arg(ap, char *));
}

#include <stdarg.h>
#include "holberton.h"

void p_num(va_list ap)
{
        print_number(va_arg(ap, int));
}

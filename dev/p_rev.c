#include <stdarg.h>

void p_rev(va_list ap)
{
        print_rev(va_arg(ap, char *));
}

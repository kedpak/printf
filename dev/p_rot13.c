#include <stdarg.h>

void p_rot13(va_list ap)
{
        rot13(va_arg(ap, char *));
}

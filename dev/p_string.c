#include <stdarg.h>

void p_string(va_list ap)
{
        char *string;
        unsigned int i;

        string = va_arg(ap, char *);
        for (i = 0; i < _strlen(string); i++)
        {
                _putchar(string[i]);
        }

}

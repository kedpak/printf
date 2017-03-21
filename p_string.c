#include <stdarg.h>
#include "holberton.h"

void p_string(va_list ap)
{
        char *string;
        unsigned int i, length;


        string = va_arg(ap, char *);
	length = _strlen(string);
        for (i = 0; i < length; i++)
        {
                _putchar(string[i]);
        }

}

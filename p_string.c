#include <stdarg.h>
#include "holberton.h"

unsigned int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
//	length++;
	return (length);
}

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

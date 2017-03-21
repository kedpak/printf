#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
/**
 * _printf - Behold, the magic function that should print many things to stdout
 * @format: character pointer checking each character in string given,
 * see man page!
 * Return: number of chars
 */
unsigned int _printf(const char *format, ...)
{
	form_t print_type[] = {
		{'c', p_char},
		{'b', p_binary},
		{'s', p_string},
		{'i', p_num},
		{'d', p_num},
		{'u', p_unum},
		{'o', p_octal},
		{'x', p_hex},
		{'X', p_hex},
		{'%', p_percent},
		{'\0', NULL}
	};
	unsigned int i = 0, k = 0; int j = 0; va_list ap;

	va_start(ap, format);
	for (; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			k++;
			while (print_type[j].type != '\0')
			{
				if (print_type[j].type == format[i])
				{
					print_type[j].func(ap);
				}
				j++;
			}
			j = 0;
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
		}
	}
	va_end(ap);
	return (i - k);
}

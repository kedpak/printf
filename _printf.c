#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _printf - Behold, the magic function that should print many things to stdout
 * @format: character pointer checking each character in string given,
 * see man page!
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	form_t print_type[] = {
		{'c', p_char}, {'b', p_binary}, {'s', p_string}, {'d', p_num},
		{'i', p_num}, {'u', p_unum}, {'o', p_octal}, {'x', p_hex},
		{'X', p_hex}, {'%', p_percent}, {'\0', NULL}
	};
	unsigned int i = 0; int j = 0, characters = 0; va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (print_type[j].type != '\0')
			{
				if (print_type[j].type == format[i + 1])
				{
					characters += print_type[j].func(ap);
					i++;
					break;
				}
				j++;
			}
			if (print_type[j].type == '\0')
			{
				_putchar('%');
				characters++;
			}
		}
		else
		{
			_putchar(format[i]);
			characters++;
		}
		i++;
	}
	va_end(ap);
	return (characters);
}

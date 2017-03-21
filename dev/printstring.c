#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

void p_num(va_list ap)
{
	print_number(va_arg(ap, int));
}

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
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}
        
unsigned int _printf(const char *format, ...)
{
	form_t print_type[] = {
	      {'c', p_char},
	      {'s', p_string},
	      {'i', p_num},
	      {'d', p_num},
	      {'\0', NULL}
	      };
        unsigned int i = 0;
	int j = 0;
/*	static char buffer[1024]; */
        va_list ap; 

        va_start(ap, format);

        for (; format && format[i] != '\0'; i++)
        {
		
		if (format[i] == '%')
		{

			i++;
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
/*	i = 0;
        while(buffer[i] != '\0')
        {
                _putchar(buffer[i]);
                i++;
        }
        buffer[i] = '\0';

	buffer[i] = '\0'; */
	va_end(ap);
	return (i);
}
int main() 
{
	char s;

	s = _printf("%c %d %s %i, hello %s\n", 'c', 244, "string", 4, "we did it!"); 
/*	printf("%d is the length of buffer\n", s); */
	return 0;
}



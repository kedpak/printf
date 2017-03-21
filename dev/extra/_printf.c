#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


int p_char(va_list ch)
{
	return (write(1, &ch, 1));
}


int _printf(const char *format, ...)
{
	form_t print_type[] = {
		{'c', p_char},
		{'\0', NULL}
		}; 
        int i, j;
	static char buffer[1024];
        va_list ap; 
	
        va_start(ap, format);

	i = 0;
        for (;format && format[i] != '\0'; i++)
	{
		j = 0;
		if (format[i] != '%')
		{
			buffer[i] = format[i];
			i++;
		}
		while (print_type[j].type != '\0')
		{
			if (print_type[j].type == buffer[i])
			{
				print_type[j].func(ap);
			}
			j++;
		} 
		i++;
	}
		
	va_end(ap);
	i = 0;
	while(buffer[i] !=)
	{
		putchar(buffer[i]);
		i++;
	}
	buffer[i] = '\0';
	return (i); 
}


int main(void)
{
	char f;
	f = 'g';
	_printf("K\n");
}

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
int _putchar(char c)
{
	return (write(1, &c, 1));
}

unsigned int _printf(const char *format, ...)
{
	/*form_t print_type[] = {
	    {'c', _print_char},
	      {'\0', NULL}
	      };*/
        unsigned int i = 0;
	static char buffer[1024];
        va_list ap; 

        va_start(ap, format);

        for (; format && format[i] != '\0'; i++)
        {
                while (format[i] != '%')
                {
                        buffer[i] = format[i];
                        i++;
                }
	}
	va_end(ap);
	i = 0;
	while(buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}
	buffer[i] = '\0';
	printf("This is the value of i: %d\n", i);
	return (i);
}

int main() 
{
	char s;

	s = _printf("hi\n"); 
	printf("%d is the length of buffer\n", s);
	return 0;
} 

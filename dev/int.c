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


void print_number(int n)
{
	int count, digits, temp, tempDig, divide;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
		}
		for (digits = 0, temp = n; temp != 0; digits++)
		{
			temp = temp / 10;
		}
		for (count = digits, tempDig = n; count > 0; count--)
		{
			for (divide = count - 1; divide > 0; divide--)
			{
				tempDig = tempDig / 10;
			}
			tempDig = tempDig % 10;
			if (tempDig < 0)
			{
				_putchar(-tempDig + '0');
			}
			else
			{
				_putchar(tempDig + '0');
			}
			tempDig = n;
		}
	}
}

void p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}

void p_num(va_list ap)
{
	print_number(va_arg(ap, int));
}


        
unsigned int _printf(const char *format, ...)
{
	form_t print_type[] = {
		{'c', p_char},
		{'i', p_num},
		{'d', p_num},
		{'\0', NULL}
	};
        unsigned int i = 0;
	int j = 0;
/*static char buffer[1024]; */
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
/*i = 0;
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

	s = _printf("hi %c woopie %d hey \n", 'm', 9); 
	printf("%d is the length of buffer\n", s);
	return 0;
}

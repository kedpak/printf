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

void p_char(va_list ap)
{
	_putchar(va_arg(ap, int));
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

void print_unumber(unsigned int n)
{
	int count, digits, temp, tempDig, divide;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
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
			_putchar(tempDig + '0');
			tempDig = n;
		}
	}
}

void p_unum(va_list ap)
{
	print_unumber(va_arg(ap, int));
}

void p_num(va_list ap)
{
	print_number(va_arg(ap, int));
}

/* Function to convert a decinal number to binary number */
void p_binary(va_list ap) {
	int n  = (va_arg(ap, int));
	int remainder;
	int binary = 0, i = 1;

	while(n != 0) {
		remainder = n % 2;
		n = n / 2;
		binary= binary + (remainder * i);
		i = i * 10;
	}
	print_unumber(binary);
}

/* Function to convert a decinal number to octal number */
void p_octal (va_list ap) {
	int remainder;
	int octal = 0, i = 1;
	int n  = (va_arg(ap, int));

	while(n != 0) {
		remainder = n % 8;
		n = n / 8;
		octal = octal + (remainder * i);
		i = i * 10;
	}
	print_unumber(octal);
}

void p_hex(va_list ap) {
	char hexDigits[] = "0123456789ABCDEF";
	char hexadecimalNumber[40];
	int decimalNumber = (va_arg(ap, int));
	int index, remainder, i = 0;

	index = 0;
      
	/* Convert Decimal Number to Hexadecimal Numbers */ 
	while(decimalNumber != 0) {
		remainder = decimalNumber % 16;
		hexadecimalNumber[index] = hexDigits[remainder];
		decimalNumber /= 16;
		index++;
	}
	hexadecimalNumber[index] = '\0';
	hexadecimalNumber = p_rev(hexadecimalNumber);
   
	while (hexadecimalNumber[i] != '\0')
	{
		_putchar(hexadecimalNumber[i]);
		i++;
	}   
} 


unsigned int _printf(const char *format, ...)
{
	form_t print_type[] = {
		{'c', p_char},
		{'b', p_binary}, //change to print_unum
		{'i', p_num},
		{'d', p_num},
		{'u', p_unum},
		{'o', p_octal},
		{'x', p_hex},
		{'X', p_hex},
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

	s = _printf("hi %c woopie %u hey \n", 'm', 97); 
//	printf("%d is the length of buffer\n", s);
	return 0;
}

#include "holberton.h"

void p_hex(va_list ap) {
	char hexDigits[] = "0123456789ABCDEF";
	char hexadecimalNumber[40];
	int decimalNumber = (va_arg(ap, int));
	int index, remainder;

	index = 0;
      
	/* Convert Decimal Number to Hexadecimal Numbers */ 
	while(decimalNumber != 0) {
		remainder = decimalNumber % 16;
		hexadecimalNumber[index] = hexDigits[remainder];
		decimalNumber /= 16;
		index++;
	}
	hexadecimalNumber[index] = '\0';
	print_rev(hexadecimalNumber);

/*	hexadecimalNumber = p_rev(hexadecimalNumber);
   
	while (hexadecimalNumber[i] != '\0')
	{
		_putchar(hexadecimalNumber[i]);
		i++;
		}*/   
} 

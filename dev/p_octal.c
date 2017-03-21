#include "holberton.h"

/* Function to convert a decinal number to octal number */
void p_octal (va_list ap) {
	unsigned int remainder;
	unsigned int octal = 0, i = 1;
	unsigned int n  = (va_arg(ap, unsigned int));

	while(n != 0) {
		remainder = n % 8;
		n = n / 8;
		octal = octal + (remainder * i);
		i = i * 10;
	}
	print_unumber(octal);
}

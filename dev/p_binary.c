#include "holberton.h"

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

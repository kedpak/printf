#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct print_type - struct of char and pointer function
 * form_t - type of struct
 * @type: input char pointer
 * @func: input function
 */
typedef struct print_type
{
	char type;
	int (*func)();
} form_t;
int _printf(const char *format, ...);
int p_char(va_list ap);
int p_num(va_list num);
int p_float(va_list fl);
int p_string(va_list str);
void _putchar(char c);
int p_rot13(va_list rot);
int p_rev(va_list ap);
int print_number(int n);
int print_rev(char *s);
int rot13(char *str);
int print_unumber(unsigned int n);
int p_unum(va_list ap);
int p_binary(va_list ap);
int p_octal(va_list ap);
int p_hex(va_list ap);
int p_percent(void);
int _strlen(char *s);
#endif /* VARIADIC_FUNCTION_H */

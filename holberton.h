#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 * struct print_type - struct of char and pointer function
 * form_t - type of struct
 * @type: input char pointer
 * @func: input function
 */
typedef struct print_type
{
	char type;
	void (*func)();
} form_t;
unsigned int _printf(const char *format, ...);
void p_char(va_list ap);
void p_num(va_list num);
void p_float(va_list fl);
void p_string(va_list str);
int _putchar(char c);
void p_char(va_list ch);
void p_float(va_list fl);
void p_string(va_list str);
void p_rot13(va_list rot);
void p_rev(va_list ap);
void print_number(int n);
void print_rev(char *s);
void rot13(char *str);
void print_unumber(unsigned int n);
void p_unum(va_list ap);
void p_binary(va_list ap);
void p_octal(va_list ap);
void p_hex(va_list ap);
void p_percent(void);
unsigned int _strlen(char *s);
#endif /* VARIADIC_FUNCTION_H */

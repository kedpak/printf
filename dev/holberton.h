#ifndef HOLBERTON_H
#define HOLBERTON_H
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
void p_char(va_list ap);
void p_num(va_list num);
void p_float(va_list fl);
void p_string(va_list str);
int _putchar(char c);
#endif /* VARIADIC_FUNCTION_H */

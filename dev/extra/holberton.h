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
int _putchar(char c);
void p_char(va_list ap);
void p_string(va_list ap);
int _strlen(char *s);
void p_num(va_list ap);
unsigned int _printf(const char *format, ...);
#endif

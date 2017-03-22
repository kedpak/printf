#include "holberton.h"

/**
 * format_specifier - loops through struct array and counts strings
 * @c: character format
 * Return: length of  all characters
 */
int (*format_specifier(char c))(va_list)
{
	int i;

	form_t print_type[] = {
		{'c', p_char},
		{'b', p_binary},
		{'s', p_string},
		{'i', p_num},
		{'d', p_num},
		{'u', p_unum},
		{'o', p_octal},
		{'x', p_hex},
		{'X', p_hex},
		{'%', p_percent},
		{'\0', NULL}
	};

	for (i = 0; print_type[i].type; i++)
	{
		if (print_type[i].type == c)
		{
			return (print_type[i].type);
		}
	}
	return (NULL);

}

#include <unistd.h>
#include "holberton.h"
/**
 * print_rev - print reverse with the use of _putchar
 * @s: string to be reversed
 * Return: amount of characters
 */
int print_rev(char *s)
{
	int i, j, length, char_count;
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL || s == ((char *)0))
	{
		s = "(null)";
		length = _strlen(s);
		for (i = 0; i < length; i++)
		{
			_putchar(s[i]);
		}
		return (length);
	}
	length = _strlen(s);
	char_count = length;
	while (length > 0)
	{
		_putchar(s[length]);
		length--;
	}
	return (char_count);
}

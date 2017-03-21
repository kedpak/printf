#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @s: string parameter
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: N/A, just printing
*/

int print_rev(char *s)
{
	int length = 0, chars;

	while (s[length] != '\0')
	{
		length++;
	}
	length = length - 1;
	chars = length;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
	return (chars);
}

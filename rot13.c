#include <stdio.h>
#include "holberton.h"

/**
 * rot13 - switch characters to the 13th
 * @str: input string
 * Return: void
 */
int rot13(char *str)
{
	int i, j, length;
	char *a1 = "abcdefghijklmABCDEFGHIJKLM";
	char *a2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	length = _strlen(str);
	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			if (str[i] == a1[j])
			{
				_putchar(a2[j]);
				break;
			}
			else if (str[i] == a2[j])
			{
				_putchar(a1[j]);
				break;
			}
		}
		if (j > 25)
		{
			_putchar(str[i]);
		}
	}
	return (length);
}

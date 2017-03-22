#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @s: string given
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - convert characters into numbers
 * @n: input integers
 * Return: void
 */
void print_number(int n)
{
	int count, digits, temp, tempDig, divide;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
		}
		for (digits = 0, temp = n; temp != 0; digits++)
		{
			temp = temp / 10;
		}
		for (count = digits, tempDig = n; count > 0; count--)
		{
			for (divide = count - 1; divide > 0; divide--)
			{
				tempDig = tempDig / 10;
			}
			tempDig = tempDig % 10;
			if (tempDig < 0)
			{
				_putchar(-tempDig + '0');
			}
			else
			{
				_putchar(tempDig + '0');
			}
			tempDig = n;
		}
	}
}

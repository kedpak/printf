#include "holberton.h"

void print_unumber(unsigned int n)
{
	unsigned int count, digits, temp, tempDig, divide;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
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
			_putchar(tempDig + '0');
			tempDig = n;
		}
	}
}
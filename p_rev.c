#include <stdarg.h>
#include "holberton.h"

void p_rev(va_list ap)
{

	char *revs;

        revs = print_rev(va_arg(ap, char *));
	if (revs == NULL)
	{
		return;
	}
	print_rev(va_arg(ap, char *));

}

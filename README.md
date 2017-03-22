# Custom printf function in C
##README
README -- _printf
 2017 by Hunter Casbeer and Kevin Pak

 Permission to use, copy, modify, and distribute this software for any
 purpose with or without fee is hereby granted, provided that the above
 copyright notice and this permission notice appear in all copies.

 THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE AUTHORS AND
 CONTRIBUTORS ACCEPT NO RESPONSIBILITY IN ANY CONCEIVABLE MANNER.
## Description
This custom printf function attempts to emulate the stand printf function. The printf function sends formatted output to stdout. Typically the prinf function includes a format parameter which represents a string text that is sent to the stdout. Optionally, format tags or conversion specifiers may be included to replace that specific tag for a specified output type. These format tags begin with a % sign, followed by a corresponding character which represents a specified output type. 
## Synopsis
A custom printf fucntion was created by utilizing several smaller functions and an array of structs that is looped to find the conversion specifier. Several specifier types were taken into account including characters, strings, integers, unsigned integers, reverse strings, hexidcimals, and octals. 

## C language standard functions used
* ``write``, ``va_start``, ``va_end``, ``va_arg``
## Files
* ``_printf.c``: A custom ``printf()`` function that loops through each character of the format string given. If a format specifier, helper functions print the appropriate characters to the output. All C files in the current directory of printf are the support functions.
* ``dev/`` is a directory that contains test versions of the helper functions.  These test files may contain edge cases that may not be considered in the main printf directory
# Custom printf function in C
## Synopsis
A custom printf fucntion was created by utilizing several smaller functions and an array of structs that is looped to find the conversion specifier. Several specifier types were taken into account including characters, strings, integers, unsigned integers, reverse strings, hexidcimals, and octals. 
## Description
This custom printf function attempts to emulate the stand printf function. The printf function sends formatted output to stdout. Typically the prinf function includes a format parameter which represents a string text that is sent to the stdout. Optionally, format tags or conversion specifiers may be included to replace that specific tag for a specified output type. These format tags begin with a % sign, followed by a corresponding character which represents a specified output type. 

Specifers and output types:
`c  - Character`
`d or i - Signed decimal integer`
`e - Scientific notation using e character`
`E  Scientific notation using E character`
`f  Decimal floating point`
`g  Uses the shorter of %e or %f`
`G  Uses the shorter of %E or %f`
`o  Signed octal`
`s  String of characters`
`u  Unsigned decimal integer`
`x  Unsigned hexadecimal integer`
`X  Unsigned hexadecimal integer (capital letters)`
`p  Pointer address`
`n  Nothing printed`
`%  Character`

The format specifers are placed directly into the format string, but the contents of the specifier must be defined and placed into the second argument of the function. 

`_printf("Hello I have %d dogs", 5);`
This will print out "Hello I have 5 dogs" into the stdout. 

## Authors
Hunter Casbeer and Kevin Pak

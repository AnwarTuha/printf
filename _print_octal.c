#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  _print_octal - Displays an unsigned 
 *               integer using an octal representation
 *
 *	@args: arguments to be printed
 *
 *  Return: count of each character of output
 */
int _print_octal(va_list args)
{
    int count = 0;
    unsigned int n = va_arg(args, unsigned int);
    char *s = _convert_base(n, 8);

    for (int i = 0; s[i]; i++) {
        count += _putchar(s[i]);
    }
    
    return count;
}
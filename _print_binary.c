#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_c - prints given character
 *
 * @args: character to be printed
 *
 * Return: 1 denoting success
 */
int _print_binary(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    return _convert_base(n, 2);
}

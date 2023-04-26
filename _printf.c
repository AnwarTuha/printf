#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  _printf - prints output according to given format
 *
 *	@format: format of output
 *
 *  Return: count of each character of output
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	handler_type type[] = {
		{"c", _print_c},
		{"s", _print_s},
		{"%", _print_percent},
		{"d", _print_i},
		{"i", _print_i},
		{"b", _print_binary},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex_lowercase},
		{"X", _print_hex_uppercase},
		{"p", _print_p},
		{NULL, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(args, format);
	count = _print_helper(format, type, args);
	va_end(args);

	return (count);
}

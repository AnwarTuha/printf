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
		{NULL, NULL}
	};

	if (format == NULL || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}

	va_start(args, format);
	count = print_helper(format, type, args);
	va_end(args);

	return (count);
}

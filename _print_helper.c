#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *  _print_helper - prints to output according to given format
 *
 *	@format: format of output
 *	@type: function that handles printing of output
 *	@args: arguments to be printed
 *
 *  Return: count of each character of output
 */
int _print_helper(const char *format, handler_type type[], va_list args)
{
	int i = 0, j;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
			continue;
		}

		i++;
		j = 0;
		while (type[j].parameter)
		{
			if (*type[j].parameter == format[i])
			{
				count += type[j].f(args);
				break;
			}
			j++;
		}

		if (!type[j].parameter)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
		i++;
	}
	return (count);
}

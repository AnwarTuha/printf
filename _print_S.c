#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  _print_S - prints a given string
 *
 *	@args: arguments to be printed
 *
 *  Return: count of each character of output
 */
int _print_S(va_list args)
{
	char *str;
	int i, count = 0;
	int cast;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			cast = str[i];
			if (cast < 16)
			{
				_putchar('0');
				count++;
			}
			count += printf_HEX_aux(cast);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

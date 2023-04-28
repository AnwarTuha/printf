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
	char *str = va_arg(args, char *);
	int count = 0, i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			printf("\\x%02X", str[i]);
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}

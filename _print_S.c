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
	int count = 0;
	char *str = va_arg(args, char *);

	while (*str) {
		if (*str >= 32 && *str < 127)
		{
			putchar(*str);
			count++;
		}
		else
		{
			printf("\\x%02X", *str);
			count += 4;
		}
		str++;
	}

	return (count);
}

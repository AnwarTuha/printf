#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  _print_unsigned - Displays an unsigned integer
 *					using a decimal representation
 *
 *	@args: arguments to be printed
 *
 *  Return: count of each character of output
 */
int _print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		count++;
		n %= divisor;
		divisor /= 10;
	}

	return (count);
}

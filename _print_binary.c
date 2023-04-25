#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_binary - converts, prints and counts a given unsigned int
 *
 * @args: character to be printed
 *
 * Return: count of printed digits
 */
int _print_binary(va_list args)
{
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (mask)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			count++;
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
			count++;
		}
		mask >>= 1;
	}

	return (count);
}

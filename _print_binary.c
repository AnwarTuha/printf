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
	int count = 0, i;
	unsigned int n = va_arg(args, unsigned int);
	char *s = _convert_to_base(n, 2);

	if (!n)
	{
		count += _putchar('0');
	}

	for (i = 0; s[i] && n; i++)
	{
		count += _putchar(s[i]);
	}

	return (count);
}

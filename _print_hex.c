#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  _print_hex_lowercase - Transforms an unsigned integer
 *                       to a hexadecimal representation
 *
 *	@args: arguments to be printed
 *
 *  Return: count of each character of output
 */
int _print_hex_lowercase(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = _convert_to_base(n, 16);
	int count = 0, i;

	if (!n)
	{
		count += _putchar('0');
	}

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'F')
		{
			s[i] += 'a' - 'A';
		}
		count += _putchar(s[i]);
	}

	return (count);
}

/**
 *  _print_hex_uppercase - Transforms an unsigned integer
 *                       to a hexadecimal representation
 *
 *	@args: arguments to be printed
 *
 *  Return: count of each character of output
 */
int _print_hex_uppercase(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = _convert_to_base(n, 16);
	int count = 0, i;

	if (!n)
	{
		count += _putchar('0');
	}

	for (i = 0; s[i]; i++)
	{
		count += _putchar(s[i]);
	}

	return (count);
}

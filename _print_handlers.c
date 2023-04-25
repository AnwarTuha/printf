#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_c - prints given character
 *
 * @args: character to be printed
 *
 * Return: 1 denoting success
 */
int _print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * _print_s - prints given string
 *
 * @args: string to be printed
 *
 * Return: 1 denoting success
 */
int _print_s(va_list args)
{
	int i = 0;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * _print_percent - prints % character
 *
 * @args: passed argument to match format of other handlers
 *
 * Return: 1
 */
int _print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * _convert_to_base - converts and prints integer to binary in given base
 *
 * @n: integer to be converted
 * @base: base to convert to
 *
 * Return: count of printed digits
 */
char *_convert_to_base(unsigned int n, unsigned int base)
{
	const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (n != 0)
	{
		*--ptr = Representation[n % base];
		n /= base;
	}

	return (ptr);
}

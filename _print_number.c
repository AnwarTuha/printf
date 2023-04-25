#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_d - prints given decimal
 *
 * @args: string to be printed
 *
 * Return: 1 denoting success
 */
int _print_d(va_list args)
{
	int *n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
	{
		count += _print_d(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;
	return (count);
}

/**
 * _print_i - prints given int
 *
 * @args: string to be printed
 *
 * Return: 1 denoting success
 */
int _print_i(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
	{
		count += _print_i(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;
	return (count);
}

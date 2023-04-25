#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_i - prints given int
 *
 * @args: string to be printed
 *
 * Return: 1 denoting success
 */
int _print_i(va_list args)
{
	int i;
	int count = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
		if ((n / i) % 10 < 0)
		{
			count += _putchar(-(n / i % 10) + '0');
		}
		else
		{
			count += _putchar((n / i % 10) + '0');
		}
		}
		else if (n / i == 0 && i == 1)
		{
		count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}

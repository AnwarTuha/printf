#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_p - prints memory address in hexadecimal format
 *
 * @args: pointer to be printed
 *
 * Return: number of characters printed
 */
int _print_p(va_list args)
{
	void *pointer;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	pointer = va_arg(args, void*);
	if (pointer == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)pointer;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}

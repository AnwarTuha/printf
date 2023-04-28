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
	void *ptr = va_arg(args, void *);

	return (printf("%p", ptr));
}

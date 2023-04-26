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
    void *p = va_arg(args, void *);
    unsigned long int n = (unsigned long int)p;
    int printed = 0;

    printed += _putchar('0');
    printed += _putchar('x');

    if (n == 0)
    {
        printed += _putchar('0');
    }
    else
    {
        char hex[16] = "0123456789abcdef";
        char buf[20];
        int i = 0;

        while (n != 0)
        {
            buf[i++] = hex[n % 16];
            n /= 16;
        }

        while (i > 0)
        {
            printed += _putchar(buf[--i]);
        }
    }

    return (printed);
}

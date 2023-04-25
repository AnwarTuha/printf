#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct handler - gets handler function based on format
 * @parameter: format required
 * @f: function that satisfies the format
 */
typedef struct handler
{
	char *parameter;
	int (*f)(va_list args);
} handler_type;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_helper(const char *format, handler_type args[], va_list list);
int _print_c(va_list args);
int _print_s(va_list args);
int _print_percent(va_list args);
int _print_d(va_list args);
int _print_i(va_list args);
int _print_binary(va_list args);
char *_convert_base(unsigned int n, unsigned int base);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex_lowercase(va_list args);
int _print_hex_uppercase(va_list args);

#endif /* MAIN_H */

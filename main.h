#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct handler - print
 * @parameter: The operator
 * @f: The function associated
 */
typedef struct handler
{
	char *parameter;
	int (*f)(va_list ap);
} handler_type;

int _printf(const char *format, ...);
int _putchar(char c);
int print_helper(const char *format, handler_type args[], va_list list);
int _print_c(va_list ap);
int _print_s(va_list ap);
int _print_percent(va_list args __attribute__((unused)));

#endif /* MAIN_H */

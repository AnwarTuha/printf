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
int _print_helper(const char *format, handler_type args[], va_list list);
int _print_c(va_list args);
int _print_s(va_list args);
int _print_percent(va_list args);

#endif /* MAIN_H */

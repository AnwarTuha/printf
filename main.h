#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print - print
 * @parameter: The operator
 * @f: The function associated
 */
typedef struct input_handler
{
	char *parameter;
	int (*f)(va_list ap);
} handler_type;

int _printf(const char *format, ...);
int _putchar(char c);
int get_input_handler(const char *format, handler_type args[], va_list list);

#endif /* MAIN_H */
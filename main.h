#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print - print
 * @parameter: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H */
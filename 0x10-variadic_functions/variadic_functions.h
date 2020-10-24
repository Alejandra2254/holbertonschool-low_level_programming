#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct form - Struct form
 *
 * @type: type of variable
 * @f: The function associated
 */
typedef struct form
{
	char *type;
	void (*f)(va_list arg);
} form_;
void _char(va_list arg);
void _integer(va_list arg);
void _float(va_list arg);
void _string(va_list arg);
#endif

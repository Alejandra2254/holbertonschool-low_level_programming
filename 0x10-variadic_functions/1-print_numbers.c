#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, valor;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		valor = va_arg(arg, int);
		printf("%d", valor);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}

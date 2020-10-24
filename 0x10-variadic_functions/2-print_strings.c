#include "variadic_functions.h"
/**
 * print_strings - prints string, followed by a new line
 * @n: numbers of parameters.
 * @separator: string separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *ale;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		ale = va_arg(arg, char *);
		if (ale == NULL)
			printf("(nil)");
		else
			printf("%s", ale);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}

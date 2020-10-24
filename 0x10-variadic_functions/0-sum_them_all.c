#include "variadic_functions.h"
/**
 * sum_them_all - sum all the arguments
 * @n: number of arguments
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	int valor, sum = 0;
	unsigned int i;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		valor = va_arg(par, int);
		sum = sum + valor;
	}
	va_end(par);

	return (sum);
}

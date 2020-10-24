#include "variadic_functions.h"

/**
 * _char - print char
 * @arg: argumentos
 */
void _char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * _integer - prints integer
 * @arg: argumentos
 */
void _integer(va_list arg)
{
	printf("%i", va_arg(arg, int));
}
/**
 * _float - prints float
 * @arg: argumentos
 */
void _float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * _string - prints string
 * @arg: argumentos
 */
void _string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	form_ form1[] = {
		{"c", _char},
		{"i", _integer},
		{"f", _float},
		{"s", _string},
	};
	int i = 0, j = 0;
	char *sep = "";

	va_start(arg, format);
	while (format && format[i])
	{
		while (j < 4)
		{
			if (*form1[j].type == format[i])
			{
				printf("%s", sep);
				form1[j].f(arg);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(arg);
}

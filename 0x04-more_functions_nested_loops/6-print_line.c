#include "holberton.h"

/**
 * print line - print.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}

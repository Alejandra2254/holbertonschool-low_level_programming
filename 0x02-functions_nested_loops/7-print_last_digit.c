#include "holberton.h"

/**
 *print_last_digit - print last digit with %10
 *@c: number
 *Return: Always 0 - ok
 */

int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (a > 0)
	{
		_putchar(a + '0');
	}
	else
	{
		a = a * -1;
		_putchar(a + '0');
	}
	return (a);
}

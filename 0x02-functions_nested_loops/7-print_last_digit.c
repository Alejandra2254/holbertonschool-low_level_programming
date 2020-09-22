#include "holberton.h"

/**
 *print_last_digit - print last digit with %10
 *@c: number
 *Return: Always 0 - ok
 */

int print_last_digit(int c)
{
	if (c > 0)
	{
		c = c % 10;
		_putchar(c + '0');
	}
	else
	{
		c = (c * -1) % 10;
		_putchar(c + '0');
	}
	return (c);
}

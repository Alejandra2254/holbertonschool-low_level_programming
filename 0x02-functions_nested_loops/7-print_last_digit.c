#include "holberton.h"

/**
 * main - print last digit
 *
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

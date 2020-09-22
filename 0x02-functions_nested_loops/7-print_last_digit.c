#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: checks the number
 * Return: Returns c as the last digit
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

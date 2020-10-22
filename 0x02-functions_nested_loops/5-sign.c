#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to checks the number
 * Return: Returns 1, if is positive -1, if is negative 0 if not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

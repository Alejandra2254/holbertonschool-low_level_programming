#include "holberton.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int m;
		for (m = 48; m < 58; m++)
		{
			if (m != 50 && m != 52)
			{
				_putchar(m);
			}
		}
		_putchar('\n');
}

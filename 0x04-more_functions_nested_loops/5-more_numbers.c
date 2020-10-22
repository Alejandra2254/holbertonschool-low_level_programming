#include "holberton.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y / 10 != 0)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}

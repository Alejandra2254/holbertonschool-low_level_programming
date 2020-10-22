#include "holberton.h"
/**
 * times_table - prints a table
 *
 */
void times_table(void)
{
	int x, y, a;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = x * y;

			if (a < 10)
			{
				if (x > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(a + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

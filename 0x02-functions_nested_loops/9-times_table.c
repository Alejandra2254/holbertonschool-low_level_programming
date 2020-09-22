#include "holberton.h"
/**
 * times_table - prints a table
 *
 */
void times_table(void)
{
	int x, y, a, b, c;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = x * y;
			b = a / 10;
			c = a % 10;
			if (x != 9)
			{
				if (a < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(b + '0');
					_putchar(c + '0');
					_putchar(',');
				}
			}
			else
			{
			_putchar('\n');
			}
		}
	}
}

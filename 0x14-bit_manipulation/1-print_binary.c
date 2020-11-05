#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	int i, a = 1, b;
      	unsigned long int p;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
		}
	}
}

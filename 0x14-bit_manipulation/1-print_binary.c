#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	int i, a = 1, b;
	unsigned long int num = n;
	unsigned int p;

	if (num == 0)
		_putchar('0');
	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
		}
	}
}

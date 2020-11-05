#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	char flag = 'f';
      	unsigned long int i, ntoprint;

	if (!n)
	{
		_putchar('0');
		return;
	}
	i = sizeof(n) * 8;
	for (; i; i--)
	{
		ntoprint = (n >> (i -1)) & 1;

		if (!flag || ntoprint)
		{
			_putchar(ntoprint + '0');
			flag = '\0';
		}
	}
}

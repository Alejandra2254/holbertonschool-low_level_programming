#include "holberton.h"
/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * @n: number
 * @m: second number
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int i;

	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}

	return (count);
}

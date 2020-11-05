#include "holberton.h"
/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: integer
 * @index: where index is the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(n) * 8)
		return (-1);
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}

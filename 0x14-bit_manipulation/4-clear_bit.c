#include "holberton.h"
/**
 * clear_bit - function that clear a bit
 * @n: pointer to the number
 * @index: index
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}

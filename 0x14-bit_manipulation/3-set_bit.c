#include "holberton.h"
/**
 * set_bit function that sets the value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1 if it worked or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}

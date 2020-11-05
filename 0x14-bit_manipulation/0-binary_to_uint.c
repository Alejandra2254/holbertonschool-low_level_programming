#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to a unsigned int
 * @b: binary number
 * Return: unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, digit;
	unsigned int convert = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		digit = b[i] - '0';
		convert = (convert * 2) + digit;
	}
	return (convert);
}

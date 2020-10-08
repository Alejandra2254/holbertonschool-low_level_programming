#include "holberton.h"

/**
 * _memcpy - copy to string
 * @dest: string to copy
 * @src: string from copy
 * @n: size of copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
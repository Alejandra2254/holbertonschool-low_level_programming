#include "holberton.h"

/**
 * _strncpy - copy string
 * @dest: where
 * @src: from
 * @n: number of characters
 * Return: dest funtion where was copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

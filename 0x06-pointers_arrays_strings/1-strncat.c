#include "holberton.h"

/**
 * _strncat -
 * @dest
 * @src
 * Return:
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[d] != '\0')
	{
		dest[i] = src[d];
		d++;
		i++;
		if (n == d)
			break;
	}

	dest[i] = '\0';
	return (dest);
}

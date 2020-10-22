#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: secind string
 * @n: number characters to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0, u = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[d] != '\0')
	{
		d++;
	}
	while (u <= d)
	{
		if (n > 0)
		{
		dest[i] = src[u];
		i++;
		u++;
		n--;
		}
		else
			break;
	}

	return (dest);
}

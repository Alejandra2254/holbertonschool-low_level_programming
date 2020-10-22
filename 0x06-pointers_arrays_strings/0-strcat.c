#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
	}

	dest[i] = '\0';
	return (dest);
}

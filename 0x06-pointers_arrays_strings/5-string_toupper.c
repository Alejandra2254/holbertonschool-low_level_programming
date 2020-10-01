#include "holberton.h"

/**
 * string_toupper - changes all lowecase letters
 * @d: string
 * Return: uppercase string
 */
char *string_toupper(char *d)
{
	int i = 0, j;

	while (d[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (d[j] >= 97 && d[j] <= 122)
		{
			d[j] = d[j] - 32;
		}
	}
	return (d);
}

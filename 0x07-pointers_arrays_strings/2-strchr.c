#include "holberton.h"

/**
 * _strchr - search a character
 * @s: string
 * @c: character
 * Return: the last of the string or null if dont find it
 */

char *_strchr(char *s, char c)
{
	int i = 0, j, si = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			si = 1;
			break;
		}
	}
	if (si == 1)
	{
		return (&s[j]);
	}
	else
		return ('\0');
}

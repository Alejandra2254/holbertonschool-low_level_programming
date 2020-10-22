#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to analyze
 * @accept: strint to analyze from
 * Return: position
 */

char *_strpbrk(char *s, char *accept)
{

	int i = 0, j, yes;

	for (i = 0; s[i] != '\0'; i++)
	{
		yes = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				yes = 1;
				break;
			}
		}

		if (yes == 1)
			break;
	}
	if (yes == 1)
		return (&s[i]);
	else
		return ('\0');
}

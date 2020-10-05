#include "holberton.h"
/**
 * _strstr - search needle
 * @haystack: string where search
 * @needle: character to find
 * Return: position
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; haystack; i++)
	{
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (j > 0)
		{
			i -= j;
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}

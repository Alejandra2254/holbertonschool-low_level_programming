#include "holberton.h"
/**
 * _strstr - search needle
 * @haystack: string where search
 * @needle: character to find
 * Return: position
 */

char *_strstr(char *haystack, char *needle)
{
	int c, i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		c = i;
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0')
		{
			i++;
			j++;
		}

			if (needle[j] == '\0')
			{
				return (haystack + c);
			}
			i = c + 1;
		}
		return ('\0');
}

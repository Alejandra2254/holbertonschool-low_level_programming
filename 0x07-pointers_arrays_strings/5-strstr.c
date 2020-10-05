#include "holberton.h"
/**
 * _strstr - search needle
 * @haystack: string where search
 * @needle: character to find
 * Return: position
 */

char *_strstr(char *haystack, char *needle)
{
	int long, i, j = 0, yes = 0;

	for (long = 0; needle[long] != '\0'; long++)
	{
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			if(needle[j] != '\0')
			{
				yes = 1;
				break;
			}
			j++;
		}
		else
			y = 0;
		if (yes == 1)
			break;
	}
	if (yes == 1)
		return(&haystack[i - long]);
	else
		return ('\0');
}

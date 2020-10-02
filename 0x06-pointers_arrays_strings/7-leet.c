#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: 0 success
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 65 || s[i] == 97)
			s[i] = 52;
		if (s[i] == 69 || s[i] == 101)
			s[i] = 51;
		if (s[i] == 79 || s[i] == 111)
			s[i] = 48;
		if (s[i] == 84 || s[i] == 116)
			s[i] = 55;
		if (s[i] == 76 || s[i] == 108)
			s[i] = 49;
		i++;
	}
	return (s);
}

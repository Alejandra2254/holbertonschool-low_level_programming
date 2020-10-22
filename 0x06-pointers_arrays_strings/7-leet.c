#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: 0 success
 */
char *leet(char *s)
{
	int i = 0, j;

	 char a[] = "aeotl";
	 char b[] = "AEOTL";
	 char c[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0' && b[j] != '\0'; j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = c[j];
			}
		}
		i++;
	}
	return (s);
}

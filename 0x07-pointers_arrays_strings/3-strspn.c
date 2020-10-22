#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: number bytes
 * @accept: string
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, yes, sum = 0;

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
			sum = sum + 1;
		else
			break;
	}
	return (sum);
}

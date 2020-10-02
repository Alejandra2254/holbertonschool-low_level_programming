#include "holberton.h"

/**
 * rot13 - encode a string usind rot13
 * @st: string
 * Return: string
 */

char *rot13(char *st)
{
	int i = 0, j;
	char a[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; st[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (a[j] == st[i])
			{
				st[i] = c[j];
				break;
			}
		}
	}
	return (st);
}

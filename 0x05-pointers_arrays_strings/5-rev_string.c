#include "holberton.h"
/**
 * print_rev - prints a string
 * @s: string
 * Return: string
 */
void rev_string(char *s)
{
	int i = 0, j;
	char a, b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i; j++)
	{
		a = s[j];
		b = s[i];
		s[i] = a;
		s[j] = b;
		i--;
	}
}

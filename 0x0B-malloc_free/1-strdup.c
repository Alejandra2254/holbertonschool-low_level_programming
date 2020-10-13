#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate a string
 * @str: string original
 * Return: NULL if str or s is null and a pointer of S if not
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int c;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[i] = '\0';
	return (s);
}

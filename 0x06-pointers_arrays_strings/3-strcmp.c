#include "holberton.h"

/**
 * _strcmp - compare the string
 * @s1: string
 * @s2: string
 * Return: 0 if is the same or the difference if is like that
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] == s2[i] && s1[i] != '\0')
		{
			i++;
		}
	return (s1[i] - s2[i]);
}

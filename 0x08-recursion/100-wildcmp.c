#include "holberton.h"

/**
 * wildcmp -  compares two strings
 * @s1: string one to compare.
 * @s2: string two to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0] != '\0' && s2[0] != '\0' && s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else if (s1[0] == s2[0])
		return (1);
	if (s2[0] == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
		else if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
		else
			return (0);
	}
}

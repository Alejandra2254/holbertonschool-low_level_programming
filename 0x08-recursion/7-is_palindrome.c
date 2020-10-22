#include "holberton.h"

/**
 * _lon - check the code for Holberton School students.
 * @s: string
 * Return: Always
 */
int _lon(char *s)
{
	if (*s != '\0')
	{
		return (1 + _lon(s + 1));
	}
	return (0);
}
/**
 * _compare - funtion to compare
 * @s: string position
 * @a: long
 * Return: 1 is in palindrome 0 if not
 */
int _compare(char *s, int a)
{
	if (*s == *(s + (a - 1)))
	{
		return (_compare(s + 1, a - 2));
	}
	else if (a <= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int a;

	a = _lon(s);
	return (_compare(s, a));
}

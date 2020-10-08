#include "holberton.h"

/**
 * long_1 - check the code for Holberton School students.
 * @s: number
 *
 * Return: Always 0.
 */

int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);

}
int compare(char *s, int l)
{
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: character
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int l;

	l = long_1(s);
	return (compare(s, l));
}

#include "holberton.h"

/**
 * _isupper - prints uppercase character
 * @c: character
 * Return: returns 1 if is isupper and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

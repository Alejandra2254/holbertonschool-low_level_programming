#include "holberton.h"
/**
 * _islower - returns 1 if is a lowercase letter
 *
 * @c: character to check for lowercase
 * Return 1 if a lowercase number
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

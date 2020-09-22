#include "holberton.h"
/**
 * _islower - check lowercase character, returns 1 if is a lowercase letter
 *
 * @c: character to check for lowercase
 * Return: Returns 1 if a lowercase number, returns 0 if no
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

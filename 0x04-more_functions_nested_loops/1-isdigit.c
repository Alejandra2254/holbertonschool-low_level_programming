#include "holberton.h"

/**
 * _isdigit - check if is digit
 * @c: number
 * Return: 1 if is digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

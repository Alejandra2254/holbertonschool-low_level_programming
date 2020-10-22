#include "holberton.h"

/**
 * _abs - absolute value of a number
 * @r: checks the numbers
 * Return: returns absolute value of r
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
	return (r);
}

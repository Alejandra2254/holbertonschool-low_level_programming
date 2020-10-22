#include "holberton.h"
/**
 * _isalpha - check alphabet lowercase and alphacase
 * @c: checks the character
 * Return: Returns 1 if the character is in lowercase or alphacase, 0 if no
 */

int _isalpha(int c)
{
	if (c >= 65  && c <= 122)
	{
		if (c >= 91 && c <= 96)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}

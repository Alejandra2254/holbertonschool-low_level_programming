#include "holberton.h"
/*
 * main
 *
 * checks for lowercase character
 */

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
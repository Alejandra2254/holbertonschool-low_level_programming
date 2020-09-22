#include "holberton.h"
/*
 * main
 *
 * checks for lowercase character
 */

int _isalpha(int c)
{
	if ( c >= 65  && c <= 122 )
	{
		if ( c >= 91 && c <= 96 )
		{
			return (0);
		}
		return (1);
	}
	return (0);
}

#include "holberton.h"

/**
 * main aboslute value
 *
 */

int _abs(int r)
{
	if ( r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
	return (r);
}
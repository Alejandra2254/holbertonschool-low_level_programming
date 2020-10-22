#include "holberton.h"

/**
 * _sqrt_recursion - recursion
 * Return: natural number
 * @n: natural
 */

int _sqrt_recursion(int n)
{
	return (number(n, 1));
}

/**
 * number - recursion
 * Return: natural number
 * @i: natural number
 * @j: natural
 */

int number(int i, int j)
{
	int sol = j * j;

	if (sol > i)
		return (-1);
	if (sol == i)
		return (j);
	else
		return (number(i, j + 1));
}

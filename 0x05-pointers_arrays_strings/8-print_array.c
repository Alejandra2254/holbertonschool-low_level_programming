#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print n elments of an array
 * @a: string
 * @n: number of elements
 * Return: 0 success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

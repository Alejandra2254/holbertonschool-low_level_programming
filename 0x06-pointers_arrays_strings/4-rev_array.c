#include "holberton.h"
/**
 * reverse_array - prints a string
 * @a: string
 * @n: numbers
 * Return: string
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		n--;
	}
}

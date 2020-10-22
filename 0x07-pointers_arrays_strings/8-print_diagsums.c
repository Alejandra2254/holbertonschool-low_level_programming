#include "holberton.h"
/**
 * print_diagsums - add numbers of the diagonal
 * @a: string
 * @size: size
 * Return: 0 success
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size ; i++)
	{
		sum = sum + a[(size + 1) * i];
		sum1 = sum1 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}

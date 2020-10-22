#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: smallest number
 * @max: biggest number
 * Return: NULL if fail, pointer to new array if not.
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int)); /* rango diferencia */
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	return (a);
}

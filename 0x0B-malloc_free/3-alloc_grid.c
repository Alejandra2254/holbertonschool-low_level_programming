#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure or width or height negative or 0
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}

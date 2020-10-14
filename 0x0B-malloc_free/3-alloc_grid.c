#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -
 * @width:
 * @height:
 * Return: NULL on failure or width or height negative or 0
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc (height * sizeof(int *));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc (width * sizeof (int));
		if (a[i] == NULL)
		{
			return (NULL);
			free(a);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}

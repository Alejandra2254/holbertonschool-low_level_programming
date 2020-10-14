#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - Free up memory from 2 dimensional grid
 * @grid: pointer to grid
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

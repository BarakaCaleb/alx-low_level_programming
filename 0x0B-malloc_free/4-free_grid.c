#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - This frees 2d array
 * @grid: 2d grid
 * @height: the height dimension of grid
 * Description: frees the memory of grid
 * Return: nothing
 *
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

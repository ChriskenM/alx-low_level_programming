#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees the 2d array in alloc_grid.c
 *@height: grid height
 *@grid: the grid to be freed
 *
 *Return: Nothing
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

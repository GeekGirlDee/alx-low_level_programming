#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2d grid previously created
 * by alloc_grid function, frees memory of grid
 * @grid: 2d grid
 * @height: height dimension for grid
 * Return: NA
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		clear(grid[i]);
	}
	clear(grid);
}

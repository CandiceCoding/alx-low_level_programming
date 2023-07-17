#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimensional array of integers
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
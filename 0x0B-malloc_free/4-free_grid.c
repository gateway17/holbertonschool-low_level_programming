#include "holberton.h"
/**
 * free_grid - frees array previously created by alloc_grid function.
 * @grid: array created by other function.
 * @height: height of array (grid).
 */

void free_grid(int **grid, int height)
{
	int ctr;

	if (grid == NULL || height < 1)
		return;

	for (ctr = 0; ctr < height; ctr++)
	{
		free(grid[ctr]);
	}
	free(grid);
}

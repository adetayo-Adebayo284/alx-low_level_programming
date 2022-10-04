#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously..
 * created by your alloc_grid function.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

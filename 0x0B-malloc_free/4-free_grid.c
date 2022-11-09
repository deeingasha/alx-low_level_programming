#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees 2D array created by alloc_grid function
  *
  * @grid: grid to be freed
  * @height: height of grid
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

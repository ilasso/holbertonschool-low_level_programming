#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid-function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid    : grid to free
 * @height   : height
 * Return:   void
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_grid(int **grid, int height)
{
	int i = 0;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - frees allocated memory of 2d array
*
* @grid: input 2d arry to be freed
* @height: height to index through array
*
*/
void free_grid(int **grid, int height)
{
	int ind;

	for (ind = 0; ind < height; ind++)
	{
		free(grid[ind]);
	}

	free(grid);
}

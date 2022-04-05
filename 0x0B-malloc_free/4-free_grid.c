#include "main.h"
#include <stdlib.h>
/**
*free_grid - functions frees the 2-D grid previously created
*@grid: referrences allocated grid
*@height: height of the grid
*Return: none.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

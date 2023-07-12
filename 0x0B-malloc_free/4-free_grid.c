#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees allocated memory
 * @grid: pointr to the freed grid
 * @height: height of the grid
 * Return : no return
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == 0)
	{
		return;
	}
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

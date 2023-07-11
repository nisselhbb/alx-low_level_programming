#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a
 * 2 dimensional array of integers
 * @width: width of the grid (columns)
 * @height: height of the grid (rows)
 * Return: 0 if failure,  pointer to the
 * 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0)
	{
		return (0);
	}
	if (height <= 0)
	{
		return (0);
	}
	grid = (int **) malloc(height * sizeof(int));
	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

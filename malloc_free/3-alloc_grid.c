#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2D array of integers,
 * or NULL if width/height <= 0 or on failure.
 */
 int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w, i;
	if (width <= 0 || height <= 0)
		return (NULL);
	
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}

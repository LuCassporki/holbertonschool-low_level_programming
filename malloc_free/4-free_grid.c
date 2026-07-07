#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The 2D array of integers to free.
 * @height: The height (number of rows) of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Étape 1 : Protection si la grille n'existe pas ou est déjà vide */
	if (grid == NULL || height <= 0)
	{
		return;
	}

	/* Étape 2 : Destruction méthodique de chaque ligne (les étages) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Étape 3 : Destruction du tableau de pointeurs principal (l'ascenseur) */
	free(grid);
}

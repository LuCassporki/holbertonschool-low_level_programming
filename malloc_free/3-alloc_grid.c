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

	/* Étape 1 : Contrôle des dimensions */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Étape 2 : Allocation de l'axe vertical (les pointeurs de lignes) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Étape 3 : Allocation des axes horizontaux (chaque ligne de la grille) */
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		
		/* 🚨 PROTOCOLE DE SÉCURITÉ EN CAS D'ÉCHEC DE L'AXE MÉMOIRE */
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

	/* Étape 4 : Initialisation complète de la matrice à zéro */
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	/* Étape 5 : Libération du pointeur maître vers l'application */
	return (grid);
}

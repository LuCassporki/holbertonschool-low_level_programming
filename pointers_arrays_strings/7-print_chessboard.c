#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The pointer to the 2D array of 8x8 characters.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	/* Boucle 1 : On parcourt les 8 lignes */
	while (i < 8)
	{
		j = 0;
		/* Boucle 2 : On parcourt les 8 colonnes de la ligne actuelle */
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		/* Fin de ligne : on applique un retour à la ligne physique */
		_putchar('\n');
		i++;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the linear integer array (casted matrix).
 * @size: The size of the matrix (width and height).
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;

	while (i < size)
	{
		/* Somme diagonale principale : formule (i * size) + i */
		sum1 += a[(i * size) + i];

		/* Somme diagonale secondaire : formule (i * size) + (size - 1 - i) */
		sum2 += a[(i * size) + (size - 1 - i)];

		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: A pointer to the first element of the array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	/* On décrémente n immédiatement pour qu'il cible le dernier index valide (n - 1) */
	n--;

	/* Tant que l'index de gauche n'a pas croisé l'index de droite */
	while (i < n)
	{
		/* Le swap physique en RAM */
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;

		/* Convergence vers le milieu */
		i++;
		n--;
	}
}

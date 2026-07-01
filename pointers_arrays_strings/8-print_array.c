#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the first element of the array.
 * @n: The number of elements to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Si ce n'est pas le dernier élément, on met le séparateur */
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

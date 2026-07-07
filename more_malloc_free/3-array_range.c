#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array containing a range of values.
 * @min: The first value included in the array.
 * @max: The last value included in the array.
 *
 * Return: A pointer to the newly created array of integers,
 * or NULL if min > max or if allocation fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

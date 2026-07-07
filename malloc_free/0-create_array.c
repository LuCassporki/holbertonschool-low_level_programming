#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a char.
 * @size: The size of the array to allocate.
 * @c: The specific char to initialize the array with.
 *
 * Return: A pointer to the allocated array,
 * or NULL if size is 0 or if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Étape 1 : Intercepter le cas d'une taille nulle */
	if (size == 0)
	{
		return (NULL);
	}

	/* Étape 2 : Demande de terrain sur le Heap (Le Tas) */
	array = malloc(size * sizeof(char));

	/* Étape 3 : Vérification de la sécurité de malloc */
	if (array == NULL)
	{
		return (NULL);
	}

	/* Étape 4 : Utilisation de notre index i pour pré-remplir le terrain */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* Étape 5 : On renvoie les coordonnées du premier piquet */
	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc, and initializes it to 0.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if allocation fails
 * or if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total_size;

	/* Étape 1 : Interception des demandes nulles */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Étape 2 : Calcul de la dimension volumétrique globale */
	total_size = nmemb * size;
	/* Étape 3 : Demande d'allocation de la zone brute */
	ptr = malloc(total_size);
	/* Étape 4 : Contrôle de la douane mémoire */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Étape 5 : Balai laser - Initialisation de chaque octet à zéro */
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}
	/* Étape 6 : Libération du pointeur universel */
	return ((void *)ptr);
}

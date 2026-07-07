#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails,causes normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Étape 1 : Demande de terrain sur le Tas */
	ptr = malloc(b);

	/* Étape 2 : Protocole d'interception d'échec critique */
	if (ptr == NULL)
	{
		exit(98);
	}

	/* Étape 3 : Libération du pointeur caméléon vers le programme */
	return (ptr);
}

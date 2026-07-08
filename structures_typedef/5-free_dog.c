#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libere la memoire allouee pour une structure dog_t
 * @d: Pointeur vers la structure dog_t a liberer
 *
 * Return: Rien (void)
 */
void free_dog(dog_t *d)
{
	/* Securite absolue : Si le chien n'existe pas, on ne fait rien */
	if (d == NULL)
		return;

	/* 1. On libere la copie du nom si elle existe */
	if (d->name != NULL)
		free(d->name);

	/* 2. On libere la copie du proprietaire si elle existe */
	if (d->owner != NULL)
		free(d->owner);

	/* 3. On libere enfin la structure globale elle-meme */
	free(d);
}

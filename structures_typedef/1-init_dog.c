#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise les variables d'une structure struct dog
 * @d: Pointeur vers la structure struct dog a initialiser
 * @name: Pointeur vers la chaîne du nom du chien
 * @age: Âge du chien
 * @owner: Pointeur vers la chaîne du nom du propriétaire
 *
 * Return: Rien (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Sécurité : On vérifie que le pointeur d'entrée n'est pas NULL */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

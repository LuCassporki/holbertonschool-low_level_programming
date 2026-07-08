#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les elements d'une structure struct dog
 * @d: Pointeur vers la structure struct dog a afficher
 *
 * Return: Rien (void)
 */
void print_dog(struct dog *d)
{
	/* Contrainte 1 : Si d est NULL, on quitte sans rien faire */
	if (d == NULL)
		return;

	/* Contrainte 3 : Verification du nom */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* L'age est affiche normalement (comportement %f standard) */
	printf("Age: %f\n", d->age);

	/* Contrainte 3 : Verification du proprietaire */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

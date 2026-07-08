#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calcule la longueur d'une chaine de caracteres
 * @s: La chaine a analyser
 *
 * Return: La longueur de la chaine
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - Copie une chaine de caracteres vers une autre destination
 * @dest: Le pointeur vers le tampon de destination
 * @src: La chaine source a copier
 *
 * Return: Le pointeur vers la destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Cree et alloue dynamiquement une nouvelle structure dog_t
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Proprietaire du chien
 *
 * Return: Pointeur vers la nouvelle structure allouee, ou NULL si echec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	char *name_copy, *owner_copy;

	/* 1. Securite sur les parametres d'entree */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* 2. Allocation de la structure globale dog_t */
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);

	/* 3. Allocation et copie du Nom */
	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(poppy);
		return (NULL);
	}
	_strcpy(name_copy, name);

	/* 4. Allocation et copie du Proprietaire */
	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(poppy);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	/* 5. Hydratation de la structure et retour du pointeur */
	poppy->name = name_copy;
	poppy->age = age;
	poppy->owner = owner_copy;

	return (poppy);
}

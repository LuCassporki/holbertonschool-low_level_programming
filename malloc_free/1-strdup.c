#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string,
 * or NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	/* Étape 1 : Intercepter si la chaîne d'origine n'existe pas */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Étape 2 : Calculer la longueur de la chaîne (comme strlen) */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/* Étape 3 : Allocation avec l'octet de sécurité pour le \0 */
	copy = malloc((len + 1) * sizeof(char));

	/* Étape 4 : Vérification du canal mémoire */
	if (copy == NULL)
	{
		return (NULL);
	}

	/* Étape 5 : Copie brute des caractères */
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	/* Étape 6 : Clôture de la chaîne avec le caractère nul */
	copy[len] = '\0';

	/* Étape 7 : Retour des coordonnées du nouveau terrain */
	return (copy);
}

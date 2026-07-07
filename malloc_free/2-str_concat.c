#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string to append.
 *
 * Return: A pointer to the new string containing s1 followed by s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	/* Étape 1 : Sécurisation et traitement des pointeurs NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Étape 2 : Mesure du premier segment */
	while (s1[len1] != '\0')
		len1++;

	/* Étape 3 : Mesure du second segment */
	while (s2[len2] != '\0')
		len2++;

	/* Étape 4 : Allocation de la zone globale unifiée (+1 pour le \0) */
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	/* Étape 5 : Contrôle de sécurité de l'axe mémoire */
	if (concat == NULL)
	{
		return (NULL);
	}

	/* Étape 6 : Injection du premier segment s1 */
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	/* Étape 7 : Injection du second segment s2 juste à la suite */
	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}

	/* Étape 8 : Enclenchement du signal de fin de chaîne */
	concat[i] = '\0';

	/* Étape 9 : Libération du pointeur vers l'application */
	return (concat);
}

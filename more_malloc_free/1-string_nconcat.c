#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string.
 * @s1: The first string.
 * @s2: The second string from which to copy n bytes.
 * @n: The maximum number of bytes to copy from s2.
 *
 * Return: A pointer to the newly allocated space in memory containing s1
 * followed by n bytes of s2, and null terminated. Returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	/* Étape 1 : Protection contre les pointeurs fantômes NULL */
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

	/* Étape 4 : Alignement stratégique du limiteur n */
	if (n >= len2)
		n = len2;

	/* Étape 5 : Allocation de l'entrepôt global (+1 pour le \0) */
	concat = malloc((len1 + n + 1) * sizeof(char));

	/* Étape 6 : Douane de sécurité de malloc */
	if (concat == NULL)
	{
		return (NULL);
	}

	/* Étape 7 : Injection du premier segment s1 */
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	/* Étape 8 : Injection des n octets du second segment s2 */
	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}

	/* Étape 9 : Enclenchement du verrou final */
	concat[i] = '\0';

	/* Étape 10 : Restitution de l'adresse brute */
	return (concat);
}
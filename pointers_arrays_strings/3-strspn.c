#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The pointer to the string to scan.
 * @accept: The pointer to the string containing the allowed bytes.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	/* Boucle 1 : On inspecte la chaîne principale s */
	while (s[i] != '\0')
	{
		j = 0;
		/* Boucle 2 : On cherche s[i] dans le dictionnaire accept */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break; /* Validé ! On casse la boucle interne pour passer à s[i+1] */
			}
			j++;
		}

		/* Si accept[j] vaut '\0', c'est qu'on a parcouru tout accept sans trouver s[i] */
		if (accept[j] == '\0')
		{
			return (i); /* Rupture : on renvoie le nombre de caractères validés jusqu'ici */
		}

		i++;
	}

	return (i);
}

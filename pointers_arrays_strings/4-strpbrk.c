#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The pointer to the string to be scanned.
 * @accept: The pointer to the string containing the bytes to look for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	/* On parcourt la chaîne principale s */
	while (s[i] != '\0')
	{
		j = 0;
		/* On vérifie si s[i] fait partie des caractères recherchés */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i); /* Impact trouvé : renvoi de l'adresse brute */
			}
			j++;
		}
		i++;
	}

	return (NULL); /* Aucun point de correspondance trouvé */
}

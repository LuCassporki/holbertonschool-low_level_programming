#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The pointer to the main string to scan.
 * @needle: The pointer to the substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	/* Sécurité standard : si l'aiguille est vide, on renvoie la botte de foin */
	if (*needle == '\0')
	{
		return (haystack);
	}

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		/* Si le premier caractère concorde, on vérifie la suite en série */
		while (haystack[i + j] == needle[j])
		{
			j++;
			/* Si on arrive au bout de needle, la correspondance est totale */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}

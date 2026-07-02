#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	/* Sécurité POSIX : Si on cherche le caractère '\0' lui-même */
	if (s[i] == c)
	{
		return (s + i);
	}

	return (NULL);
}

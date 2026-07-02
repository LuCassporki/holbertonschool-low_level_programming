#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to append to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = 0;
	/* Étape 1 : On localise la fin du texte dans dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	i = 0;
	/* Étape 2 : Copie sous contrôle du quota 'n' ET du '\0' de src */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Étape 3 : On ferme TOUJOURS le buffer avec un \0 quoi qu'il arrive */
	dest[dest_len] = '\0';

	return (dest);
}

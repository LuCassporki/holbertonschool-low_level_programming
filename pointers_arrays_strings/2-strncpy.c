#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer.
 * @src: The source string to copy.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination buffer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	/* Étape 1 : Copie des caractères de la source */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Étape 2 : Remplissage obligatoire avec des \0 si src < n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

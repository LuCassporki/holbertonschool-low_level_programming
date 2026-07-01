#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The buffer pointer where the string will be copied.
 * @src: The source string pointer to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	/* Tant qu'on n'a pas copié le \0 de la source */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* Piège classique : Ne pas oublier de cloner le \0 à la fin ! */
	dest[i] = '\0';

	return (dest);
}
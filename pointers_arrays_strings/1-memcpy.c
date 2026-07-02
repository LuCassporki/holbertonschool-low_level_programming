#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The pointer to the destination memory area.
 * @src: The pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	/* On effectue le transfert physique octet par octet */
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	/* Le protocole standard exige de renvoyer le pointeur dest original */
	return (dest);
}

#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer to the memory area to fill.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	/* On boucle exactement n fois pour écraser la mémoire */
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	/* Le protocole exige de renvoyer le pointeur initial */
	return (s);
}

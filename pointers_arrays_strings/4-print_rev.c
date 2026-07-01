#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string.
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	/* Étape 1 : On calcule la longueur sans déplacer s */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Étape 2 : On part de la fin et on recule jusqu'à 0 inclus */
	len--; /* On se place sur le dernier caractère avant '\0' */
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
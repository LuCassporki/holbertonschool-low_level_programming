#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: A pointer to the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	/* Étape 1 : On calcule la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Étape 2 : Index de départ exact pour matcher le checker d'Holberton */
	i = (len + 1) / 2;

	/* Étape 3 : On affiche la suite en marche avant */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

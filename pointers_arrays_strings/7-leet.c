#include "main.h"

/**
 * leet - Encodes a string into 1337 speak.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	i = 0;
	/* Boucle 1 : Parcours de la chaîne principale */
	while (str[i] != '\0')
	{
		j = 0;
		/* Boucle 2 : Parcours de la matrice de correspondance (10 éléments) */
		while (j < 10)
		{
			/* L'unique 'if' autorisé pour l'interception et le remplacement */
			if (str[i] == letters[j])
			{
				str[i] = leet_replace[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}

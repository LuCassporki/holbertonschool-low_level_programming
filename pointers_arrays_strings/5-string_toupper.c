#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	/* On parcourt la chaîne jusqu'au signal d'arrêt \0 */
	while (str[i] != '\0')
	{
		/* Si le caractère actuel est une lettre minuscule */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* On applique le décalage de 32 octets vers les majuscules */
			str[i] = str[i] - 32;
		}
		i++;
	}

	/* On retourne le pointeur initial comme demandé par le prototype */
	return (str);
}

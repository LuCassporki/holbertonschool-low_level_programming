#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if it is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	int i;
	char seps[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (seps[i] != '\0')
	{
		if (c == seps[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		/* Cas 1 : Premier caractère de la chaîne */
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		/* Cas 2 : Le caractère précédent est un séparateur */
		else if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}

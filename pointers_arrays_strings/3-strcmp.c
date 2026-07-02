#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	/* Tant que les caractères sont identiques et qu'on n'a pas fini s1 */
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	/* Renvoie la différence de valeur ASCII brute */
	return (s1[i] - s2[i]);
}

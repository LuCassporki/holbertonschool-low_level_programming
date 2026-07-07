#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string to append.
 *
 * Return: A pointer to the new string containing s1 followed by s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;
	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";
	while (s1[len1] != '\0') len1++;
	while (s2[len2] != '\0') len2++;
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL) {return (NULL);}
	for (i = 0; i < len1; i++){concat[i] = s1[i];}
	for (j = 0; j < len2; j++, i++){concat[i] = s2[j];}
	concat[i] = '\0';
	return (concat);
}

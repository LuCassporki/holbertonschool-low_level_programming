#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string to measure.
 *
 * Return: The length of the string as an integer.
*/
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++; /* On déplace notre vecteur d'un octet vers la case suivante */
	}

	return (count);
}

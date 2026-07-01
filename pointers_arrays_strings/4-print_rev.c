#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string to print.
 *
 * Return: void.
 */
void print_rev(char *s)
{
    int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		_putchar(*s);
		s--; /* On déplace notre vecteur d'un octet vers la case suivante */
	    len--;
    }

	_putchar('\n');
}

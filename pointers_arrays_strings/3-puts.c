#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to the string to print.
 *
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++; /* On déplace notre vecteur d'un octet vers la case suivante */
	}

	_putchar('\n');
}

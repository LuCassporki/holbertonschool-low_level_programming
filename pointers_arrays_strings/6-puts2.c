#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: A pointer to the string to print.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	/* 1. On mesure. Aucun risque, on s'arrête pile au \0 */
	while (str[len] != '\0')
		len++;

	/* 2. On roule. La condition "i < len" bloque le vecteur instantanément */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

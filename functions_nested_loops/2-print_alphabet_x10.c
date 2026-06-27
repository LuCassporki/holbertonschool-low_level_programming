#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int ligne;
	char lettre;

	ligne = 0;
	while (ligne < 10)
	{
		lettre = 'a';
		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
		ligne++;
	}
}

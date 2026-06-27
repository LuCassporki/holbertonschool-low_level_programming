#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}

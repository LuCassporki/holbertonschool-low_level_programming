#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre;

	/* 1. Boucle pour les minuscules ('a' à 'z') */
	lettre = 'a';
	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}

	/* 2. Boucle pour les majuscules ('A' à 'Z') */
	lettre = 'A';
	while (lettre <= 'Z')
	{
		putchar(lettre);
		lettre++;
	}

	/* 3. Saut de ligne final */
	putchar('\n');

	return (0);
}

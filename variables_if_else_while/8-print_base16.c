#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* 1. Boucle pour les chiffres 0 à 9 (ASCII 48 à 57) */
	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	/* 2. Boucle pour les lettres a à f (ASCII 97 à 102) */
	num = 0;
	while (num < 6)
	{
		putchar(num + 'a');
		num++;
	}

	/* 3. Saut de ligne final */
	putchar('\n');

	return (0);
}

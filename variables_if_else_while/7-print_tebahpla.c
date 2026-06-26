#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		putchar(lettre);
		lettre--;
	}
	putchar('\n');

	return (0);
}

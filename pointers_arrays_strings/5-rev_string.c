#include "main.h"
/**
 * check the code
 *
 * Return: void.
 */
void rev_string(char *s)
{
int len;
	int i;
	char tmp;

	len = 0;
	/* Étape 1 : Calcul de la longueur de la chaîne */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Étape 2 : Échange des caractères du début et de la fin */
	i = 0;
	len--; /* Se positionne sur le dernier vrai caractère avant '\0' */
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;

		i++;   /* Le curseur du début avance */
		len--; /* Le curseur de la fin recule */
	}
}

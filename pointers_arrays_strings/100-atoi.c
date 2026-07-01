#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The pointer to the string to convert.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int res;
	int is_num;

	i = 0;
	sign = 1;
	res = 0;
	is_num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			is_num = 1;
			/* Calcul en négatif pour éviter l'overflow sur INT_MIN */
			res = (res * 10) - (s[i] - '0');
		}
		else if (is_num == 1)
		{
			/* Un caractère non-numérique après un chiffre brise la boucle */
			break;
		}
		i++;
	}

	if (sign < 0)
	{
		return (res);
	}

	return (-res);
}

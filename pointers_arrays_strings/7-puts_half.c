#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: A pointer to the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len;
	int n;
	int start;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len + 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	/* Le point de rupture exact dans la RAM */
	start = len - n; 

	len = 0; 
	while (str[len] != '\0')
	{
		/* Tant qu'on n'a pas atteint le point de rupture, on passe */
		if (len < start)
		{
			len++;
		}
		else
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int heure, minute;

	heure = 0;
	while (heure < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			/* Affichage de l'heure : Dizaine puis Unité */
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');

			_putchar(':');

			/* Affichage de la minute : Dizaine puis Unité */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			_putchar('\n');
			minute++;
		}
		heure++;
	}
}

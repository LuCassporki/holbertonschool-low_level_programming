#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int ligne, col, prod;

	ligne = 0;
	while (ligne <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			prod = ligne * col;

			if (col == 0)
			{
				_putchar(prod + '0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			col++;
		}
		_putchar('\n');
		ligne++;
	}
}

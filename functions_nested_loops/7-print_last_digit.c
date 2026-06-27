#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit (positive)
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}

	_putchar(ld + '0');
	return (ld);
}

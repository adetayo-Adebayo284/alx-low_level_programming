#include "main.h"

/**
 * base_10 - power in 10 base
 * @n: an exponent input.
 * Return: returns 10 to power exponent.
 */

int base_10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
	}
	return (base);
}

/**
 * print_number - prints integers enters to parameters.
 * @n: integer to print
 * Return: Nothing.
 */

void print_number(int n)
{
	int power;

	power = base_10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		while (n / power == 0)
			power /= 10;
		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}


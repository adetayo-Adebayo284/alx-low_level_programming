#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: input character to the function
 * Return: absolute values
 */
int print_last_digit(int n)
{
	int last;

	if (n > 0)
		last = (n % 10);
	else
		last = ((n % 10) * -1);
	_putchar(last + '0');
	return (last);
}

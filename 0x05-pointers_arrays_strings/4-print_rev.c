#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: The parameter.
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}

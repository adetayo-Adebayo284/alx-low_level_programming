#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: The parameter
 * Return: Nothing.
 */

void _puts(char *str)
{
	int incre;

	while (str[incre] != '\0')
	{
		_putchar(str[incre]);
		incre++;
	}

	putchar('\n');
}

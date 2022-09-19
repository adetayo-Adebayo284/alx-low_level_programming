#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: The parameter
 * Return: Nothing.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(str);
		str++;
	}

	putchar('\n');
}

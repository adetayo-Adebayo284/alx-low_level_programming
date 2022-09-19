#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: The parameter
 * Return: Nothing.
 */

void _puts(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		printf("%c", str[c]);
		c++;
	}

	printf("\n");
}

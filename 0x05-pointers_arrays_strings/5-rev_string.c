#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: The parameter.
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
		count++;
	while (count--)
	{
		_putchar(s[count]);

	}
	_putchar('\n');
}

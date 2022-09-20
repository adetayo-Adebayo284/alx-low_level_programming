#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: The parameter
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;
	count++;

	for (count /= 2; str[count] != '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}

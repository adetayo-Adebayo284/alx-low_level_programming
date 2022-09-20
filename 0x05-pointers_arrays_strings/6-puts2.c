#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * @str: The input parameter
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			putchar(str[i]);
		i++;
	}
}

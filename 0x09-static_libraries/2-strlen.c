#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: The parameter
 * Return: count.
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

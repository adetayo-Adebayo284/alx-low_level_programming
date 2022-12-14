#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: location
 * @b: char to fill
 * @n: number of bytes
 * Return: returns pointer to location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}

#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int strclen = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		strclen++;
		src++;
	}
	strclen++;
	if (n > strclen)
		n = strclen;
	src = start;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}

	return (tmp);
}

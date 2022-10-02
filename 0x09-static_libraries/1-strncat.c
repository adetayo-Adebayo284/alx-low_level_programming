#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 *  Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int strclen = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		strclen++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > strclen)
		n = strclen;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';

	return (tmp);
}

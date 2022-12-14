#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character
 * Return:  a pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *str = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = str;
		s++;
	}
	return (NULL);
}

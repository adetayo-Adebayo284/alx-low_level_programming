#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search
 * @needle: an input string to locate into string haystack
 * Return: a pointer or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *str = needle, *ptr = haystack;

	while (*haystack)
	{
		ptr = haystack;
		needle = str;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = ptr + 1;
	}
	return (NULL);
}

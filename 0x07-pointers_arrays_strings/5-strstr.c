#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search
 * @needle: an input string to locate into string haystack
 * Return: a pointer or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *aahaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		aahaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (aahaystack);
		haystack = aahaystack + 1;
	}
	return (0);
}

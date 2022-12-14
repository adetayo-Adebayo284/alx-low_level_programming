#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes
 * Return: returns pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ptr);
}

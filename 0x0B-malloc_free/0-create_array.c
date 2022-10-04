#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 * @size: Number of byte to allocated
 * @c: array of character
 * Return: string.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return ('\0');
	str = malloc(size);

	if (str == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		str[i] = c;

	str[size] = '\0';

	return (str);
}

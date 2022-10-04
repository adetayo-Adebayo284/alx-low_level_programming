#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly...
 * ...allocated space in memory, which contains a copy of...
 * the string given as a parameter.
 *
 * @str: Parameter that accep array.
 * Returns NULL if str = NULL.
 * returns NULL if insufficient memory was available.
 * Return: Pointer on success.
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == 0)
		return (NULL);
	while (*(str + len) != '\0')
		len++;
	len++;
	arr = malloc(len * sizeof(char));

	if (arr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = *(str + i);

	return (arr);
}

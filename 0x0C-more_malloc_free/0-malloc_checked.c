#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of allo. passed as arg.
 * Return:  a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *allo;

	allo = malloc(b);

	if (allo == NULL)
		exit(98);
	return (allo);
}

#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: The first parameter
 * @b: The second parameter
 * Return nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

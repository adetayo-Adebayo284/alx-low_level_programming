#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: input array.
 * @n: input n elements
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
			printf(", ");
		b++;
	}
	printf("\n");
}

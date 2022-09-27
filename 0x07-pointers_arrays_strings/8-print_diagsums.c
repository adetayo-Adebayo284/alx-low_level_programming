#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, num1 = 0, num2 = 0;

	for (; i < max; i += size + 1)
		num1 += a[i];
	for (i = size - 1; i < max - 1; i += size - 1)
		num2 += a[i];
	printf("%d, %d\n", num1, num2);
}

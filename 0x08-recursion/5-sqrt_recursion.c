#include "main.h"

/**
 * sqrt_ch - Checks for the square root of c
 * @g: Guess sqrt
 * @n: Number to find sqrt
 * Return: -1 or sqrt of c
 */
int sqrt_ch(int g, int n)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (sqrt_ch(g + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square
 * @n: integer to find sqrt
 * Return: Natural square root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_ch(1, n));
}

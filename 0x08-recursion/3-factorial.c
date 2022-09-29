#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: The input to the function
 * Return: The result as an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
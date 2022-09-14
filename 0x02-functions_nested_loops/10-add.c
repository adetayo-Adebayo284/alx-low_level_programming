#include "main.h"

/**
 * add - a function that adds two integers and returns the result.
 * @n: First input character to the function
 * @m: Second input character to the function
 * Return: absolute result.
 */
int add(int n, int m)
{
	int result;

	result = (n + m);
	_putchar(result + '0');
	return (result);
}

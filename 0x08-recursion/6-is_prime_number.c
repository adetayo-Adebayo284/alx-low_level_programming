#include "main.h"

/**
 * prime_ch - proto.
 * @f: input factor to check in proto.
 * @p: Possible prime number in proto.
 * Return: 1 if prime, else 0.
 */
int prime_ch(int f, int p);

/**
 * is_prime_number - States if number is prime
 * @n: Number to check
 * Return: 1 if prime, else 0.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_ch(2, n));
}

/**
 * prime_ch - Checks to see if number is prime
 * @f: input factor to check
 * @p: Possible prime number
 * Return: 1 if prime, else 0.
 */

int prime_ch(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

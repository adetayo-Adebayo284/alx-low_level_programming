#include "main.h"

/**
 * pal - obtains length of a
 * @a: string
 * @l: integer to count length
 * Return: On success 1.
 * On error, -1 is returned.
 */
int pal(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (pal(a + 1, l + 1));
}

/**
 * pali - compares string vs string reverse
 * @a: string
 * @l: length
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int pali(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (pali(a + 1, l - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int c;

	c = pal(s, 0);
	return (pali(s, c));
}

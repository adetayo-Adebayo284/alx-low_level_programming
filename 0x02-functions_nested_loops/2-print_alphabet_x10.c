#include "main.h"

/**
 * print_alphabet - Check description
 *
 * DESCRIPTION: Write a function that prints the lower alphabet 10 times,
 *
 * Return: Always Nothing.
 */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
	}
	_putchar('\n');
}

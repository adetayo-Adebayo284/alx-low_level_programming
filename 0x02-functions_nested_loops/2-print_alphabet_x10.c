#include "main.h"

/**
 * print_alphabet - Check description
 *
 * DESCRIPTION: Write a function that prints the lower alphabet
 * 10 times followed by a new line
 *
 * Return: Always Nothing.
 */
void print_alphabet_x10(void)
{
	char i;
	int k = 0;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}

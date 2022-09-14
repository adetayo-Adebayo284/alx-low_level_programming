#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet
 * Return: the program returns 0
 */
void print_alphabet_x10(void)
{
	int k;
	char i;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}

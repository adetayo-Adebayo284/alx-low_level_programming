#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * DESCRIPTION: Write a program that prints _putchar, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

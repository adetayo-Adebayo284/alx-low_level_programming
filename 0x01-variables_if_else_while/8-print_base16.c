#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char count = '0';
	char lower = 97;

	while (count <= '9')
	{
		putchar(count);
		count++;
	}

	while (lower <= 102)
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}

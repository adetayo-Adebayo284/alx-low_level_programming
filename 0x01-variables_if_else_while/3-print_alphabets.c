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
	char count = 97;
	char upper = 65;

	for (count = 97; count <= 122; count++)
	{
		putchar(count);
	}

	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

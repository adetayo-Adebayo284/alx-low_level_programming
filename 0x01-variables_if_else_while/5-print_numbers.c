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

	while (count <= '9')
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}

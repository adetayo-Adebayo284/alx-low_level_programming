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

	for (count = 97; count <= 122; count++)
	{
		if (count == 113 || 101)
		{
			continue;
		}
		putchar(count);
	}
	putchar('\n');
	return (0);
}

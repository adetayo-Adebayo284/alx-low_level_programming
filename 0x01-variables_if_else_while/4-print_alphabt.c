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
	char count = 'a';

	for (count = 'a' ; count <= 'z'; count++)
	{
		if (count != 'e' && count != 'q')
		{
			putchar(count);
		}
	}
	putchar('\n');
	return (0);
}

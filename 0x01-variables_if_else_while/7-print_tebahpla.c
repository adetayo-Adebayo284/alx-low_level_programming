#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char count = 'z';

	for (count = 'z' ; count >= 'a'; count--)
	{
		putchar(count);
	}
	putchar('\n');
	return (0);
}

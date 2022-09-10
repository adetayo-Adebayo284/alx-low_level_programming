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
	int a, b, c;
	int d;

	for (a = 0; a < 1000; a++)
	{
		b = a / 100; /*HUNDREDTH*/
		c = (a / 10) % 10; /*TENTH*/
		a = a % 10; /* SINGLE */
		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (a < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

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
	int d, e, f;

	for (e = 0; e < 100; e++)
	{
		a = e / 10; /*DOUBLE*/
		b = e % 10; /*SUNGLE*/

		for (f = 0; f < 100; f++)
		{
			c = f / 10; /* doubles snum */
			d = f % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

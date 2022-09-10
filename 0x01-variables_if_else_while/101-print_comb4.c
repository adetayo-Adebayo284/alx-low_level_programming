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
	int var1, var2, var3;
	int varia;

	for (var1 = 0; var1 < 100; var1++)
	{
		var2 = var1 / 100; /*HUNDREDTH*/
		var3 = (var1 / 10) % 10; /*TENTH*/
		var1 = var1 % 10; /* SINGLE */
		if (var2 < var3 && var3 < varia)
		{
			putchar(var2 + '0');
			putchar(var3 + '0');
			putchar(varia + '0');

			if (var1 < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

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

	var1 = 0;

	while (var1 < 100)
	{
		var2 = var1 % 10; /*The singles digit*/
		var3 = var1 / 10; /*The doubles digit*/
		if (var3 < var2)
		{
			putchar(var3 + '0');
			putchar(var2 + '0');

			if (var1 < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		var1++;
	}
	putchar('\n');
	return (0);
}

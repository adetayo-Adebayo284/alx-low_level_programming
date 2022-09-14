#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check main
 * @n: input character to the function
 * Return: absolute values
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("5d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}

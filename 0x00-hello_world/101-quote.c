#include <stdio.h>



/**
 *   main - Entry point
 *
 *
 *
 *   Return: Always 0 (Success)
 *
 */

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-1\n";
	int count = 0;

	for (count = 0; arr[count] != '\0'; count++)
	{
		putchar(arr[count]);
	}
	return (1);
}

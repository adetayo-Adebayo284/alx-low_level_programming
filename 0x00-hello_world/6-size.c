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
	char charVar = 0;
	int intVar = 0;
	long int longInt = 0;
	long long int longLongInt = 0;
	float floatVar = 0;


	printf("Size of a char: %d byte(s)\n", sizeof(charVar));
	printf("Size of an int: %d byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %d byte(s)\n", sizeof(floatVar));
	return (0);
}

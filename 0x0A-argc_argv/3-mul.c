#include "main.h"
/**
 * main - a program that multiplies two numbers.
 * @argc: counts number of arguments
 * @argv: array of argyments
 * Print error is argv[] < 2. and return 1.
 * Return: zero, success
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 2)
	{
		for (i = 0; i < argc; i++)
		{
			mul = atoi(argv[i + 1]) * atoi(argv[i + 2]);
			printf("%d\n", mul);
		}
	}
	return (0);
}

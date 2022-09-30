#include "main.h"
/**
 * main - a program that adds positive numbers. and print.
 * @argc: counts number of arguments
 * @argv: array of argyments
 * Print error is argc ! 3.
 * print error if argv encounter character and return 1
 * Return: zero, success
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

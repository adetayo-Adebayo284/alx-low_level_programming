#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply 2 numbers as arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char **argv[])
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ans = num1 * num2;
		printf("%d\n", ans);
	}

	return (0);
}

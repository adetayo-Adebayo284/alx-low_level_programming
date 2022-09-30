#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: counts number of arguments
 * @argv: array of argyments
 * Return: zero, success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

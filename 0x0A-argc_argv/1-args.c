#include "main.h"
/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: counts number of arguments
 * @argv: array of argyments
 * Return: zero, success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

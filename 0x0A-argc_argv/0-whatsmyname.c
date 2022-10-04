#include "main.h"
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: counts number of arguments
 * @argv: array of argyments
 * Return: zero, success
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
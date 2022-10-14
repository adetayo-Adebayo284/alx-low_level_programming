#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes of this function
*
* @argc: The number of command-line arguments
*
* @argv: The command-line arguments
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int num_bytes, i;
	int (*program)(int, char **) = &main;

	if (argc == 2)
	{
		num_bytes = atoi(argv[1]);
		if (num_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < num_bytes; i++)
			printf("%02x%c",
					(unsigned char)*((char *)program + i), i < num_bytes - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return (0);
}

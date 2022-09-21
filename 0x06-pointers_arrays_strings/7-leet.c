#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: an input
 * Return: An encoded string
 */

char *leet(char *s)
{
	int i = 0, m;
	char arr[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (m = 0; m < 10; m++)
		{
			if (s[i] == str[m])
			{
				s[i] = arr[m];
			}
		}
		i++;
	}

	return (s);
}

#include "main.h"

/**
 * @*rot13 - a function that encodes a string using rot13.
 * @str: An input string to encode using rot13.
 * Return: An encode string
 */

char *rot13(char *str)
{
	int count = 0, i;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (count = 0; *(str + count) != '\0'; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + count) == alp[i])
			{
				*(str + count) = rot13[i];
				break;
			}
		}
	}
	return (str);
}

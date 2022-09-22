#include "main.h"

/**
 * @*rot13 - a function that encodes a string using rot13.
 * @str: An input string to encode using rot13.
 * Return: An encode string
 */

char *rot13(char *str)
{
	int count = 0, i;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (count = 0; *(s + count) != '\0'; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == letter[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
	}
	return (s);
}

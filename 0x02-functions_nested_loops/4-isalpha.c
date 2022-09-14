#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 * @c : input character to the function.
 * Return: the program returns 1 if c is a letter, lowercase or uppercase
 * return: the program returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

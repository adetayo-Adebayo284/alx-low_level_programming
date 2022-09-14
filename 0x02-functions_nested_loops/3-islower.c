#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 *@c : input character to the function.
 * Return: the program returns 0
 */
int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 *@c : input character to the function
 * Return: the program returns 0
 */
int  _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (0);
	}
	return (lower);
}

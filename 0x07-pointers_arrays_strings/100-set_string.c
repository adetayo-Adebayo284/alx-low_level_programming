#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer to a string
 * @to: pointer to the string
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

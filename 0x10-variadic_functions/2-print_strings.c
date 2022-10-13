#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers
 * @separator: pointer to the string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list para;
	char *ptr;

	va_start(para, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		ptr = va_arg(para, char *);
		if (!separator)
			printf("%s", ptr ? ptr : "(nil)");
		else
			printf("%s%s", ptr ? ptr : "(nil)", separator);
	}

	if (n)
	{
		ptr = va_arg(para, char *);
		printf("%s\n", ptr ? ptr : "(nil)");
	}
	else
		printf("\n");
}

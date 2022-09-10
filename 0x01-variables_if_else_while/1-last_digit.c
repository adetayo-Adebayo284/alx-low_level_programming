#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int mVa = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mVa = n % 10;

	if (mVa > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mVa);
	if (mVa == 0)
		printf("Last digit of %d is %d and is 0\n", n, mVa);
	if (mVa < 6 && mVa != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mVa);

	return (0);
}

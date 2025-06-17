#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main-Entry point of the program
 *
 *This program prints if a random number is positive, negative
 *or is zero.
 *
 *Return:Always 0 (success)
 */

int main(void)
{
	int n, u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	u = n % 10;

	printf("Last digit of %d is %d", n, u);
	if (u > 5)
	{
		printf("and is greater than 5");
	}
	else if (u == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}

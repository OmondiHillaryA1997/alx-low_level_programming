#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: always (0) (success)
 */

	int main(void)
	{
		int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("%d is and greater than 5\n", n);
	}
	else if (0 != n < 6)
	{
		printf("%d and is less than 6 and not 0\n", n);
		}
		else
		{
		printf("%d and is 0\n", n);
	}
	return (0);
}

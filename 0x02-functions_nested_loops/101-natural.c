#include <stdio.h>

/**
 * main - list all the natural numbers below 1024(excluded)
 * Return: always 0
 */

	int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum = sum + 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>

/**
 * main - function that prints the number fom 1 to 100
 * Fizz numbers that are multiple of 3, Buzz numbers that are multiples of 5
 * FizzBuzz numbers that are multples of 3 and 5
 * Return: always (0) (success)
 */

int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0 && z % 5 != 0)
		{
			printf(" Fizz");
		} else if (z % 5 == 0 && z % 3 != 0)
		{
			printf(" Buzz");
		} else if (z % 3 == 0 && z % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (z == 1)
		{
			printf("%d", z);
		} else
		{
			printf("%d", z);
		}
	}
	printf("\n");
	return (0);
}

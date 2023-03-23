#include <stdio.h>

/**
 * main - prints the sum of even-valued  numbered fibonnaci sequence terms
 * Return: always 0
 */

	int main(void)
{
	int a = 0, b = 1, temp = 0, sum = 0;

	while (temp < 4000000)
	{
		temp = a + b;
		printf("%d\n", temp);
		a = b;
		b = temp;
		if (temp % 2 == 0)
		{
			sum = sum + temp;
		}
	}
	printf("The sum is :- %d\n", sum);
	return (0);
}

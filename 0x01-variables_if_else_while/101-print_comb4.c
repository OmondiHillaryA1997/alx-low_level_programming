#include <stdio.h>

/**
 * main - printing out different three degit number in ascending order
 * Return: always (0) (success)
 */

	int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (c != b && b != a && c < b && b < a)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);

					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

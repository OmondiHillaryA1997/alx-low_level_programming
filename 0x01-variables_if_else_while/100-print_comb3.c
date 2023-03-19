#include <stdio.h>
/**
 * main- entry point
 * Return: always (0) (success)
 */

	int main(void)
{
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (c != b && c < b)
			{
				putchar('0' + b);
				putchar('0' + c);

				if (b + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}

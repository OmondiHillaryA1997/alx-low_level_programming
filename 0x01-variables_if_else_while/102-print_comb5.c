#include <stdio.h>
/**
 * main - to print two two digit number in ascending order
 * Return: always (0) (success)
*/

	int main(void)
{
	int a;
	int b;
	int c;
	int d = 0;

	d = 0;
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			putchar(' ');
			b = 0;
			while (b < 10)
			{
				a = 0;
				while (a < 10)
				{
					if (d != c && c != b && b != a && d < c && c < b && b < a)
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar('0' + c);
						putchar('0' + d);

						if (a + b < 17 && c + d < 18)
						{
							putchar(',');
							putchar(' ');
						}
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

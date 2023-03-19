#include <stdio.h>
/**
 * main - entry point
 * Return: always (0) (success)
 */

	int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
		if (b < 57)
		{

		putchar(44);
		putchar(32);
		}

	}
	putchar('\n');
	return (0);
}

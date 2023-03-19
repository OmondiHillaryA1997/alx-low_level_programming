#include <stdio.h>
/**
 * main - entry point
 * Return: always (0) (success)
 */

	int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		putchar(b + '0');

	for (b = 0; b < 6; b++)
		putchar(b + 'a');
	putchar('\n');
	return (0);
}

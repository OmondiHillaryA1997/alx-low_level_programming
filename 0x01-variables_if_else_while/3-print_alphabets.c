#include <stdio.h>

/**
 * main - entry point
 * Return: always (0) (success)
 */

	int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar(ch);

	putchar('\n');

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	putchar(ch);

	putchar('\n');

	return (0);
}

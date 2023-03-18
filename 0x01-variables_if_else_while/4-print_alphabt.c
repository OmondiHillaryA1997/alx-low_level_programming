#include <stdio.h>
/**
 * main - entry point
 * Return: always (0) (success)
 */

	int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch == 'e' || ch == 'q')
	{
		ch++;
		continue;
		}
		putchar(ch);
		ch++;
		}
		putchar('\n');
		return (0);

	}

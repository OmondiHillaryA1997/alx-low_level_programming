#include "main.h"

/**
 * main - A program that prints the aphabets ten times followed by a new line
 * Return: always (0) (success)
*/

	void print_alphabet_x10(void)
{
	int t = 0;
	char ch;

	while (t < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;

		}
		putchar('\n');
		t++;
	}
	return (0);
}


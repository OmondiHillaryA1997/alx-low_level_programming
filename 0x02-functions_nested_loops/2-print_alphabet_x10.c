#include "main.h"

/**
 * print_alphabet_x10 - A program that prints the aphabets ten times
 * Return: zero
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
			_putchar(ch);
			ch++;

		}
		_putchar('\n');
		t++;
	}
}


#include "main.h"

/**
 * print_alphabet - A program that prints the alphabet and a newline
 * Return: nothing
*/

	void print_alphabet(void)
{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		return;
}

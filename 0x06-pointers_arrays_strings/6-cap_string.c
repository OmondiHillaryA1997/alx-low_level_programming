#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @s: input string
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
		putchar(*s);
		putchar(',');
		putchar(';');
		putchar('.');
		putchar('!');
		putchar('?');
		putchar('"');
		putchar('(');
		putchar(')');
		putchar('{');
		putchar('}');
	putchar('\n');
	return (s);
}

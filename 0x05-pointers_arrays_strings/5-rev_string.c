#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string
 * Return: null
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int t;

	while (s[count] != '\0')
		count++;

	for (t = 0; t < count; t++)
	{
		count--;
		rev = s[t];
		s[t] = s[count];
		s[count] = rev;
	}
}

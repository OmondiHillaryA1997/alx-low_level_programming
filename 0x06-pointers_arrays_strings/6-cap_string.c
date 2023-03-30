#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @s: input string
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string
 * @c: character
 * Return: a character
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}
	return (0);
}

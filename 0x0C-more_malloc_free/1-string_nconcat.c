#include "main.h"

/**
 * *string_nconcat - Function that concatinates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	char *str;

	str = malloc((a + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && s2[b] != '\0')
	{
		s1[a] = s2[b];

		a++;
		b++;
	}
	s1[a] = '\0';
	return (str);
}

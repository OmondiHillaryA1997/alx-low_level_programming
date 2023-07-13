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
	unsigned int a;
	unsigned int b;

	char *str;

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && s2[b] != '\0')
	{
		b++;
	}

	str = malloc((a + n) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}

	b = 0;
	while (b < n && s2[b] != '\0')
	{
		str[a] = s2[b];
		b++;
		a++;
	}

	str[a] = '\0';
	return (str);
	free(str);
}

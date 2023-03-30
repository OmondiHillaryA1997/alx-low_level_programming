#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @n: input string
 * Return: Returns encoded string
 */

char *leet(char *n)
{
	char s1[] = {'a', 'e', 't', 't', 'l'};
	char s2[] = {4, 3, 0, 7, 1};
	int i;

	for (i = 0; i < '\0'; i++)
	{
		if (*n == s1[i] || *n == s1[i] - 32)
			*n = s2[i] + '0';
	}
	n++;
	return (n);
}



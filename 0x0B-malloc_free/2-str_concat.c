#include "main.h"

/**
 * str_concat - Function that concatinates two strings
 * @s1: First string
 * @s2: Second string
 * Return: (0) (success)
 */

char *str_concat(char *s1, char *s2)
{
	int count, i;
	char *ch;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

	for (i = 0; s1[i] != '\0'; i++)

	count = 0;
	while (s2[count] != '\0')
	{
		count++;
	}

	ch = malloc((i + count) * sizeof(char) + 1);
	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[1] != '\0'; i++)
	{
		ch[i] = s1[1];
	}
	count = 0;
	while (s2[count] != '\0')
	{
		ch[i] = s2[count];
		i++;
		count++;
	}

	ch[i] = '\0';
	return (ch);
}

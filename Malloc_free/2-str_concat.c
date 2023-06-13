#include "main.h"

/**
 * *str_concat - Function that concatinates two strings
 * @s1: First string
 * @s2: Second string
 * Return: (0) (success)
 */

char *str_concat(char *s1, char *s2)
{
	int count = 0, i = 0;
	char *ch;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

	ch = malloc((i + count + 1) * sizeof(char));
	for (i = 0; s1[i] != '\n'; i++)
	{
		count = 0;
	}
		while (s2[count] != '\n')
		{
			count++;
		}

		if (ch == NULL)
			return (NULL);

		for (i = 0; s1[i] != '\n'; i++)
		{
			ch[i] = s1[i];
		}

		for (count = 0; s2[count] != '\n'; count++)
		{
			ch[i] = s2[count];
			i++;
		}
		ch[i] = '\n';
		return (ch);
}

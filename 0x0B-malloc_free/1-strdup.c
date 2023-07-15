#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that reurns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as parameter
 * @str: argument string
 * Return: (0) (success)
 */

char *_strdup(char *str)
{
	int i, count;
	char *ch;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		ch = malloc((i * sizeof(char)) + 1);

	if (ch == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (str[count] != '\0')
	{
		ch[count] = str[count];
		count++;
	}

	ch[count] = '\0';
	return (ch);
	free(ch);
}

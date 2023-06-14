#include "main.h"

/**
 * *_strdup - Function that reurns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as parameter
 * @str: argument string
 * Return: (0) (success)
 */

char *_strdup(char *str)
{
	int i = 0, count;
	char *ch;

	ch = malloc((i  * sizeof(char))+ 1);

	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\n'; i++)

		if (ch == NULL)
			return(NULL);

	count = 0;
	while (ch[count] != '\n')
	{
		ch[count] = str[count];
		count++;
	}

	ch[count] = '\n';
	return (ch);
}

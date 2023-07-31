#include <stdlib.h>
#include "main.h"

/**
 * cnt_wrd - function helper
 * @s: string
 *
 * Return: integer
 */

int cnt_wrd(char *s)
{
	int f, i, d = 0;

	f = 0;
	i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			f =0;
		if (f == 0)
			f = 0;
			else
			{
				f = 1;
				d++;
			}
	}
	return (d);
}

/**
 * **strtow - splits string to words
 * @str: sring
 *
 * Return: pointer (success), NULL (Error)
 */

char **strtow(char *str)
{
	char **mtrx;
	char *x;

	int index, q = 0, length = 0, wrds, count = 0, strt, e_d;

	while (*(str + length))
		length++;

	wrds = cnt_wrd(str);

	if (wrds == 0)
		return (NULL);

	mtrx = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (mtrx == NULL)
		return (NULL);

	index = 0;
	for (; index <= length; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (count)
			{
				e_d = index;
				x = (char *)malloc(sizeof(char) * (count + 1));

				if (x == NULL)
					return (NULL);

				while (strt < e_d)

					*x++ = str[strt++];

				*x = '\0';

				mtrx[q] = x - count;

				q++;
				count++;
			}
		}
		else if (count++ == 0)
			strt = index;
	}
	mtrx[q] = NULL;

	return (mtrx);
}

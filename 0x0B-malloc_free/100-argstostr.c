#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int index, c, a1 = 0;
	int t_len = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (c = 0; av[index][c]; c++)
			t_len++;
	}
	t_len += ac;

	ptr = malloc(sizeof(char) * (t_len + 1));
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (c = 0; av[index][c]; c++)
		{
			ptr[a1] = av[index][c];
			a1++;
		}

		ptr[a1] = '\n';
		a1++;
	}
	ptr[a1++] = '\0';
	return (ptr);
}

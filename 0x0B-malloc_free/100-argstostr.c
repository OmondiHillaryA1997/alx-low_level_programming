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
	char *ptrarg;
	int index, c;
	int a1, v = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (c = 0; av[index][c]; c++)
			index++;
	}
	v += ac;

	ptrarg = malloc(v * sizeof(char) + 1);
	if (ptrarg == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (c = 0; av[index][c]; c++)
		{
			ptrarg[a1] = av[index][c];
			a1++;
		}
		if (ptrarg[a1] == '\0')
		{
			ptrarg[a1++] = '\n';
		}
	}
	return (ptrarg);
}

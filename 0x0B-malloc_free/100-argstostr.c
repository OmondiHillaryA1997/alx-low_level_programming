#include "main.h"

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
	int a, c;
	int a1, v = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (c = 0; av[a][c]; c++)
			a++;
	}
	v = v +  ac;

	ptrarg = malloc(v * sizeof(char) + 1);
	if (ptrarg == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (c = 0; av[a][c]; c++)
		{
			ptrarg[a1] = av[a][c];
			a1++;
		}
		if (ptrarg[a1] == '\0')
		{
			ptrarg[a1++] = '\n';
		}
	}
	return (ptrarg);
}

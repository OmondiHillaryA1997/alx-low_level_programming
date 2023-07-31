#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 *
 * Return: (0) success, (1) Error
 */

int main(int argc, char *argv[])
{
	int numb, g, outcome;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	outcome = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	g = 0;
	for (; g < 5 && numb >= 0; g++)
	{
		while (numb >= cents[g])
		{
			outcome++;
			numb -= cents[g];
		}
	}
	printf("%d\n", outcome);
	return (0);
}

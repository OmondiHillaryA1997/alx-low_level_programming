#include "main.h"

/**
 * main - Function that multiplies two numbers
 * @argc: counts of arguments in a function
 * @argv: argument that points to a string
 * Return: (0) (success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	int mult = 0;

	for (count = 1; count < argc; count++)
	{
		if (argc < 3)
		{
			printf("Error\n");

			return (1);
		}
		mult = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mult);
	return (0);
}

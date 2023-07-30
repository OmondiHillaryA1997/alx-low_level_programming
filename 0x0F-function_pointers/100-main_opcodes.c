#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts argument
 * @argv: arrat arguments
 *
 * Return: (0) success always
 */

int main(int argc, char *argv[])
{
	int byts, index = 0;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (; index < byts; index++)
	{
		if (index == byts - 1)
		{
			printf("%02hhx\n", ar[index]);
			break;
		}

		printf("%02hhx", ar[index]);
	}
	return (0);
}

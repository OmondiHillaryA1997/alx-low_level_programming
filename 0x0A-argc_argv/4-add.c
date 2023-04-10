#include "main.h"

/**
 * main - Function that adds positive numbers
 * @argc: counts arguments in functions
 * @argv: argument that point on strings
 * Return: (0) (success)
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (argc == 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			if (!atoi(argv[count]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[count]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

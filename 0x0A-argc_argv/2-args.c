#include "main.h"

/**
 * main - Function that prints all arguments it receives starting with first
 * @argc: argument that counts number of arguments
 * @argv: argument that points to strigs
 * Return: (0) (success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	return (0);
}

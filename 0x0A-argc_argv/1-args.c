#include "main.h"

/**
 * main - Function that prints the number of arguments passed into it
 * @argc: counts the number of arguments passed
 * @argv: argument that points to strings
 * Return: (0) (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc-(1));

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints its name
 * @argc: counts of number of argument in a function
 * @argv: array of pointers to strings
 *
 * Return: (0) (success)
 */

int main(int argc,char *argv[])
{
	(void)argc;
	printf("%s\n",*argv);

	return (0);
}

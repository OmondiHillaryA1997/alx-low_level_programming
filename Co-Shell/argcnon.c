#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int count;
	printf("Dynamically determining of ARGC\n");

	count = 0;
	while (argv[count] != NULL)
	{
		printf("ARGV[%d] = %s\n", count, argv[count]);
		count++;
	}
	return (0);
}

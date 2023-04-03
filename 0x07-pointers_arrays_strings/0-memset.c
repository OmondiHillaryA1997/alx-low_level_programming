#include "main.h"

/**
 * _memset - Function thst fills a memory with a constatnt byte
 * @s: start address
 * @b: length
 * @n: constant byte
 * Return: Return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
	i++;
		n--;
	}
	return (s);
}

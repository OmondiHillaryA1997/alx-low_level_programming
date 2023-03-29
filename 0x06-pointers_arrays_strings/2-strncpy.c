#include "main.h"

/**
 * _strncpy - Function that copies src string to dest string
 * @dest: first string
 * @src: second string
 * @n: size of the index
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
	dest[x] = '\0';
	x++;
	}
	return (dest);
}

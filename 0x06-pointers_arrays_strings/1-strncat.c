#include "main.h"

/**
 * _strncat - Function that concatinates two strings by appending n
 * bytes of src to dest
 * @dest: first string
 * @src: second string
 * @n: number of bytes to append
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] <= 'n')
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = 'n';
	return (dest);
}

#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src
 * including the terminating null byte
 * @dest: where value will be returned
 * @src: where copies of stringe will be pointed
 * Return: null
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

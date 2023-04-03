#include "main.h"

/**
 * _strspn - Function that gets the length of prefix substring
 * @s: first string
 * @accept: second string
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{

	int count;

	count = 0;

	while (s[count] != '\0' && accept[count] != '\0' && s[count] == accept[count])
	{
		count++;
	}
	return (count);
}

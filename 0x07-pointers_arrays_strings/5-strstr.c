#include "main.h"

/**
 * _strstr - Function that locates aa substring
 * @haystack: first string
 * @needle: seconf string
 * Return: Return substring
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		if (haystack == needle && *needle != '\0')
		{
			needle++;
			if (*needle == '\0')
			{
				return (haystack);
			}
		}
	}
	haystack++;
	return (0);
}

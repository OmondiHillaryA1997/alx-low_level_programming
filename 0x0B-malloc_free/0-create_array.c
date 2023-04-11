#include "main.h"

/**
 * *create_array - Function that creates an array of chars and initializes
 * it with specific char
 * @size: size argument
 * @c: character argument
 * Return: (0) (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0 || str == NULL)
		return (NULL);

	str = malloc((size) * sizeof(char));
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}

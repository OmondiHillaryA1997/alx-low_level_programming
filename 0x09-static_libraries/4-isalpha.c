#include "main.h"
/**
 * _isalpha - func is to check if c is a letter, lowercase or uppercase
 * @c: is the argument that will be used
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - function that checks if c is an alphabet in uppercase
 * @c: is the argument that will be used
 * Return: 0
*/

int _isupper(int c)
{
	if  (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

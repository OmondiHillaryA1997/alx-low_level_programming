#include "main.h"

/**
 * _isdigit - function to check for a digit 0 through 9
 * @c: argument to be printed
 * Return: 0
*/

	int _isdigit(int c)
{
	for (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

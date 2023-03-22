#include "main.h"
#include <stdio.h>
/**
 * _abs - func is to check if c is a letter, lowercase or uppercase
 * @c: is the argument that will be used
 * Return: 0
 */
	int _abs(int c)
{
	if (c < 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}

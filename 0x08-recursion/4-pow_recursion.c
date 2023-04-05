#include "main.h"

/**
 * _pow_recursion - Function that returns the value of a number power a number
 * @x: first integer
 * @y: second integer
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y < 0)
		{
			return (-1);
		}
		return (x * _pow_recursion(x, y - 1));
	}
}

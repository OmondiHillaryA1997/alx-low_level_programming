#include "main.h"

/**
 * factorial - Function that returns the factorial of a number
 * @n: number
 * Return: always (0) (success)
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n) * factorial(n - 1);
		return (-1);
	}
}

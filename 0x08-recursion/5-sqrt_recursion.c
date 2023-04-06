#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * absolute_sqrt_recursion - Helper function
 * @n: square number
 * @r: root
 * Return: a number
 */
int absolute_sqrt_recursion(int n, int r);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (absolute_sqrt_recursion(n, 0));
}
/**
 * absolute_sqrt_recursion - Helper function
 * @n: square number
 * @r: root
 * Return: a number
 */

int absolute_sqrt_recursion(int n, int r)
{
	if (r * r > n)
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
	}

	return (absolute_sqrt_recursion(n, r + 1));
}

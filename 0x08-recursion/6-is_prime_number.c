#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input is a prime number
 * @n: input integer
 * * Return: a number
 */
int absolute_is_prime_number(int n, int p);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (absolute_is_prime_number(n, 0));
}

/**
 * absolute_is_prime_number - Helper function
 * @n: input integer
 * @p: integer
 * Return: a number
 */

int absolute_is_prime_number(int n, int p)
{
if (n % p == 0)
{
return (0);
}
if (n % n == 0)
{
return (1);
}
return (absolute_is_prime_number(n, p + 1));
		}

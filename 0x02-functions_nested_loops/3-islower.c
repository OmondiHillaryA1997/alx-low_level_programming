#include "main.h"

/**
 * _islower - A function tha checks for lowercase character
 * @c - parameter that is used to check for lowercase
 * Return: (0) (success)
*/

	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
	return (0);
}

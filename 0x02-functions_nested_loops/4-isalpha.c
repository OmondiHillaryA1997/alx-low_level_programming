#include "main.h"
/**
 * _isaplha - func is to check if c is a letter, lowercase or uppercase
 * @c: is the argument that will be used
 * Return: 0
 */
	int _isaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

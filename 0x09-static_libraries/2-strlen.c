#!/bin/bash
#include "main.h"

/**
 * _strlen - Function that that returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}

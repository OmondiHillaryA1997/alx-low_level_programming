#!/bin/bash
#include "main.h"

/**
 * _strpbrk - Function that searches for any set of bytes
 * @s: first string
 * @accept: second string
 * Return: returns a pointer
 */

char *_strpbrk(char *s, char *accept)
{
        int count;
        int a;

        for (count = 0; s[count]; count++)
        {
                for (a = 0; accept[a]; a++)
                {
                        if (s[count] == accept[a])
                        {
                                return (s);
                        }
                }
        }
        return ('\0');
}

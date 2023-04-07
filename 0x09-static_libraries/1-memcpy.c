#!/bin/bash
#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: destination string
 * @src: second string
 * @n: number of bytes
 * Return: returns a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        i = 0;
        while (i < n)
        {
                dest[i] = src[i];
                i++;
        }
        return (dest);
}

#!/bin/bash
#include "main.h"

/**
 * _strncat - Function that concatinates two strings by appending n
 * bytes of src to dest
 * @dest: first string
 * @src: second string
 * @n: number of bytes to append
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
        int a;
        int b;

        a = 0;
        while (dest[a] != '\0')
        {
                a++;
        }
        b = 0;
        while (b < n && src[b] != '\0')
        {
                dest[a] = src[b];

                a++;
                b++;
        }
        dest[a] = '\0';
        return (dest);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * i_digit - check string for non dig char
 * @str: string
 *
 * Return: non dig (0), ootherwise (1)
 */

int i_digit(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/**
 * new_strlen - length of string
 * @str: string
 *
 * Return: length
 */

int new_strlen(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * new_errors - errors for main
 */

void new_errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: array arguments
 *
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length3, index, carry, dig1, dig2, *outcome, x;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !i_digit(str1) || !i_digit(str2))
		new_errors();
	length1 = new_strlen(str1);
	length2 = new_strlen(str2);
	length3 = length1 + length2 + 1;
	outcome = malloc(sizeof(int) * length3);
		if (!outcome)
			return (1);

	index = 0;
	for (; index <= length1 + length2; index++)
		outcome[index] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		dig1 = str1[length1] - '0';
		carry = 0;

		for (length2 = new_strlen(str2) - 1; length2 >= 0; length2--)
		{
			dig2 = str2[length2] - '0';
			carry += outcome[length1 + length2 + 1] + (dig1 * dig2);
			outcome[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			outcome[length1 + length2 + 1] += carry;
	}
	for (index = 0; index < length3 - 1; index++)
	{
		if (outcome[index])
			x = 1;
		if (x)
			_putchar(outcome[index] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(outcome);
	return (0);
}

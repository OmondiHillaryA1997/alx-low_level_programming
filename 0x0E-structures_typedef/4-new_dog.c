#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_strlen - length of a string
 * @str: string
 *
 * Return: integer
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
 * new_strcpy - copies string
 * @dest: pointer to copy string
 * @src: striing to copy
 *
 * Return: pointer
 */

char *new_strcpy(char *dest, char *src)
{
	int length = 0, index;

	while (src[length] != '\0')
	{
		length++;
	}

	index = 0;
	for (; index < length; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer (success), NULL (otherwise)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int length1, length2;

	length1 = new_strlen(name);
	length2 = new_strlen(owner);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (length1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}

	dg->owner = malloc(sizeof(char) * (length2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}

	new_strcpy(dg->name, name);
	new_strcpy(dg->owner, owner);
	dg->age = age;

	return (dg);
}

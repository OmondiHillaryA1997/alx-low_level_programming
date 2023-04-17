#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog struct
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 * Description: Dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

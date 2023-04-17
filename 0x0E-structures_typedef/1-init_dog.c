#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes struct variables
 * @d: pointer to struct variable
 * @name: first initializer
 * @age: second initializer
 * @owner:third initializer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}

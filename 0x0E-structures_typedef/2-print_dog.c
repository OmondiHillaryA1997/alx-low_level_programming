#include "dog.h"

/**
 * print_dog - Function that prints struct dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	if (d == NULL)
		return;

	printf("D_Name:%s\nD_Age:%f\nD_Owner:%s\n", (*d).name, (*d).age, (*d).owner);
}

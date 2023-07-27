#include <stdio.h>

/**
 * Linked_First - application of constructor attribute befor main
 *
 *
 */

void Linked_First(void) __attribute__((constructor));

/**
 * Linked_First - Function implimentation
 *
 */

void Linked_First(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

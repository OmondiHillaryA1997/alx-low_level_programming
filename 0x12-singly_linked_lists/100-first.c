#include <stdio.h>

/**
 * HareTortoise - application of constructor attribute befor main
 *
 *
 */

void HareTortoise(void)__attribute__((constructor));

/**
 * HareTortoise - Function implimentation
 *
 */

void HareTortoise(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back! \n");
}

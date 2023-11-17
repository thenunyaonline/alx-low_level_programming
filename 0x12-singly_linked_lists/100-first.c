#include "lists.h"
void first(void)__attribute__((constructor));
/**
 * first - function that prints before main function
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

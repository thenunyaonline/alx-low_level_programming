#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - dog struct value to be initialized
 * @d: pointer to the struct of the new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

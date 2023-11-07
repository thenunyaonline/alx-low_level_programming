#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure of dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

#include "dog.h"

/**
 * init_dog - initializes the structure dog
 * @d: pointer to the structure
 * @name: name to initialize
 * @age: sge to initialize
 * @owner: owner name for initialization
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

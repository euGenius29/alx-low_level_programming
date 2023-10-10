#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - structure containing dog's basic information
 * @name: member 0
 * @age: member 1
 * @owner: member 2
 * Description: Describes the basic info  for the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog;
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#include "main.h"

/**
 * print_dog - prints struct dog
 * @d: data to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return(0);
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(NULL)";
	printf(Name: %s\nAge:%f\nOwner:%s\n", (*d).name, (*d).age, (*d).owner);
	return (0);
}

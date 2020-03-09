#include "dog.h"
#include <stdio.h>

/**
 * init_dog - put other points
 * @d: the address of memory to print
 * @name: the size of the memory to print
 * @age: the age
 * @owner: the owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ();
		d->name = name;
		d->age = age;
		d->owner = owner;
}

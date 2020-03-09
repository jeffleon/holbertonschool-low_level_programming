#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - put other points
 * @d: the address of memory to print
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

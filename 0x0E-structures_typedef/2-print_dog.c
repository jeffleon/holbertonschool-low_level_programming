#include "dog.h"
#include <stdio.h>
/**
 * print_dog - put other points
 * struct dog
 * @d: the address of memory to print
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return ();
	else if ((*d).age == 0)
		printf("Age: (nil)");
	else if ((*d).name == NULL)
		printf("Name: (nil)");
	else if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);

}



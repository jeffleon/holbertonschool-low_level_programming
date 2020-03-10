#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter
 *@str: char pointer argument
 *
 *Return: char pointer
 */
char *_strdup(char *str)
{
	char *poin = NULL;

	int i, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
	{
		j++;
	}
	j++;
	poin = malloc(j * sizeof(char));
	if (poin == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		*(poin + i) = *(str + i);
	return (poin);
}
/**
 * new_dog - put other points
 * @name: the address of memory to print
 * @age: the size of the memory to print
 * @owner: the owner of dog
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nombre = NULL, *dueno = NULL;
	dog_t *my_dog;

	nombre = _strdup(name);
	dueno = _strdup(owner);
	if (nombre == NULL || dueno == NULL)
	{
		free(nombre);
		free(dueno);
		return (NULL);
	}
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(nombre);
		free(dueno);
		return (NULL);
	}
	my_dog->name = nombre;
	my_dog->age = age;
	my_dog->owner = dueno;
	return (my_dog);
}

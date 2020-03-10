#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - put other points
 * @str: the address of memory to print
 *
 * Return: pointer char
 */
char *_strdup(char *str)
{
	char *point = NULL;
	int count = 0, i = 0;

	if (str == NULL)
		return (NULL);
	for (count = 0; *(str + count) != '\0'; count++)
	{}
	point = malloc(sizeof(*str) * count + 1);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		point[i] = str[i];
	return (point);
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

	if (name != NULL)
	{
		nombre = _strdup(name);
			if (nombre == NULL)
				return (NULL);
	}
	if (owner != NULL)
	{
		dueno = _strdup(owner);
			if (dueno == NULL)
			{
				free(nombre);
				return (NULL);
			}
	}
	my_dog = (dog_t *) malloc(sizeof(dog_t));
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

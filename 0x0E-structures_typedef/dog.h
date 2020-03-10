#ifndef DOG_H
#define DOG_H
/**
 * struct dog - check the code for Holberton School students.
 * @name: - name of the variable
 * @age: - age of the dog
 * @owner: - owner of the dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* HOLBERTON_H */



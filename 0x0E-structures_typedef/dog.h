#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - represents a dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Represents a dog with a name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

typedef struct dog dog_t;

#endif

#include "main.h"
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints members of instance of dog_t
 *
 * @d: instance of struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("%.2f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}

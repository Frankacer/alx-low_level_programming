#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - computes length of input string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - Copies string pointed to by src to buffer pointed to by dest
 * @dest: Destination memory block
 * @src: Source memory block
 * Return: return dest_start
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *dest_start = dest;

	while (src[i] != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_start);
}

/**
 * new_dog - creates an instance of dog_t
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: if successful returns pointer to first byte of new_dog,
 * otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*declare instance of struct*/
	dog_t *new_dog;

	/*allocate dynamic memory for new_dog*/
	new_dog = malloc(sizeof(dog_t));

	/*check if memory allocation was unsuccessful*/
	if (new_dog == NULL)
		return (NULL);

	/*allocate dynamic memory for members of struct*/
	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);

	/*check if memory allocation fails*/
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}

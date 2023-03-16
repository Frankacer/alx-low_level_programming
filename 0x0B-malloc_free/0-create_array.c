#include "main.h"
#include <stdio.h>

/**
 * create_array - Creates array of given size and
 * initialises it with a given char
 * @size: size of array
 * @c: init char
 *
 * Return: pointer to first char in array
 */

char *create_array(unsigned int size, char c)
{
	char arr[];
	int i;

	if (size == 0)
		return (NULL);

	/*Allocate dynamic meemory to array*/
	arr = char *(malloc(size * sizeof(char)));

	/*Condition for unsuccessful allocation*/
	if (arr == NULL)
		return (NULL);

	/*initialize array with char*/
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

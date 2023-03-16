#include "main.h"
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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *_strdup - duplicates input string
 * @str: input string
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size = _strlen(str);

	if (str == NULL)
		return (NULL);

	/*Allocate dynamic meemory to array*/
	s = (char *)malloc(size * sizeof(char));

	/*Condition for unsuccessful allocation*/
	if (s == NULL)
		return (NULL);

	/*Copy contents of str into s*/
	_strcpy(s, str);

	return (s);
}

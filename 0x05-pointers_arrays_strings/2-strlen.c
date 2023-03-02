#include "main.h"

/**
 * _strlen - returns length of the string input
 * @s: pointer to the first character of the string array
 *
 * Return: return len
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

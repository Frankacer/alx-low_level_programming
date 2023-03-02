#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 *
 * Return: Pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Advance ptr to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add terminating null byte */
	*ptr = '\0';

	return (dest);
}

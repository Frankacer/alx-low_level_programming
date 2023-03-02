#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Advance ptr to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append up to n characters from src to dest */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add terminating null byte */
	*ptr = '\0';

	return (dest);
}

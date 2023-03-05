#include "main.h"

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

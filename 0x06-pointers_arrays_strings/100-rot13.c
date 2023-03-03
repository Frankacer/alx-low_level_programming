#include "main.h"

/**
 * rot13 - Encodes a string using the rot13 cipher.
 *
 * @s: Pointer to a string.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
			*p += 13;
		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
			*p -= 13;
		p++;
	}

	return (s);
}

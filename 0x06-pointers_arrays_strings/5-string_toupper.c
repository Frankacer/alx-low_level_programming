#include "main.h"

#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
c7har *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}

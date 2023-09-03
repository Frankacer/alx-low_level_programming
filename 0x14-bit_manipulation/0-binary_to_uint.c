#include "main.h"

/**
 * _strlen - computes length of input string
 * @s: input string
 *
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in b
 * that is not 0 or 1, or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0, index;

	index = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			i++;
		else if (b[i] == '1')
		{
			result += 1 << (index - i);
			i++;
		}
		else
			return (0);
	}
	return (result);
}


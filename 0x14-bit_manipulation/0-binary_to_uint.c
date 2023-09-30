#include "main.h"

/**
 * _strlen - computes length of input string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

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
 * Return: the converted number, otherwise 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i, index = 0;

	if (b == NULL || *b == '\0')
		return (0);

	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			index++;
			continue;
		}
		else if (b[i] == '1')
			number += 1 << index;

		else /*any other char except for '0' and '1'*/
			return (0);
		index++;
	}
	return (number);
}

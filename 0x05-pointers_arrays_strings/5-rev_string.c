#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string inputp
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

/**
 * _strlen - gets length of string
 * @s: Pointer to first character of input string
 * Return: returns length of input string
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

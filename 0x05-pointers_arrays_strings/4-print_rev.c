#include "main.h"

/**
 * print_rev - prints string input in reverse
 * @s: string input
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	for (len  = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	if (len == 0)
		_putchar('\n');
}

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

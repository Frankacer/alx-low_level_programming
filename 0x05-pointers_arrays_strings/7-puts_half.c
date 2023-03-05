#include "main.h"

/**
 * puts_half - prints 2nd half of string
 * @str: input string
 */

void puts_half(char *str)
{
	int i, len, n;

	len = _strlen(str);
	n = (len - 1) / 2;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
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

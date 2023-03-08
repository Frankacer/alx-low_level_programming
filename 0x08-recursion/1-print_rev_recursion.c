#include "main.h"

/**
 * _strlen - gets length of string
 * @s: input string
 * Return: length of string
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

/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: input string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int len, i;

	len = _strlen(s);
	i = 0;

	s = s + (len - 1);
	if (i == len - 1)
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s - i));
	i++;
	_print_rev_recursion(s);
}

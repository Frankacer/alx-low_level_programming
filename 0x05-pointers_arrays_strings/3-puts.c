#include "main.h"

/**
 * _puts - prints input string followed by a newline  to output
 * @str: input string
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	if (str[len] == '\0')
		_putchar('\n');
}

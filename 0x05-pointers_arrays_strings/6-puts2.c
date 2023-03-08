#include "main.h"

/**
 * puts2 - prints every other character of inout string starting from the first
 * @str: input string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

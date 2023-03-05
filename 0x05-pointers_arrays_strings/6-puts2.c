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
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

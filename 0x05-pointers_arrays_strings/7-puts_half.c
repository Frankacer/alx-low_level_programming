#include "main.h"

/**
 * print_second_half - prints the second half of a string
 * @str: the string to print the second half of
 *
 * Return: void
 */
void print_second_half(char *str)
{
	int len = 0, start_index = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	start_index = len / 2 + len % 2;

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}

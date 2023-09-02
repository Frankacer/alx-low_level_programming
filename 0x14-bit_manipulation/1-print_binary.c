#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary_helper - prints the binary representation of a  number
 * @n: number to be converted and printed
 * @i: pointer to recursive call counter variable
 *
 * Return: nothing
*/
void print_binary_helper(unsigned long int n, unsigned int *i)
{
	unsigned int quotient = 0;

	if (n == 0)
	{
		if (*i == 0)
			_putchar('0');
		return;
	}
	(*i)++;
	quotient = n >> 1;
	print_binary_helper(quotient, i);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a  number
 * @n: number to be converted and printed
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	print_binary_helper(n, &i);
}


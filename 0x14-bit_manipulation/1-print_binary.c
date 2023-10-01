#include "main.h"

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
 * print_binary - prints the binary repersentation of an unsigned int
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	static int call_count = 1;

	if (n == 0 && call_count == 1)
	{
		_putchar('0');
		return;
	}
	else if (n == 0)
		return;

	call_count++;
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}

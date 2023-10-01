#include "main.h"

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

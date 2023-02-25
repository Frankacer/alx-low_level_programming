#include <stdio.h>

/**
 * main - prints all the numbers of baae 16 in lowercase
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 6; i++)
		putchar('a' + i);

	putchar('\n');

	return (0);
}

#include <stdio.h>


/**
 * main - print numbers from 1 -10
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (num == 9)
			putchar('\n');
	}

	return (0);
}

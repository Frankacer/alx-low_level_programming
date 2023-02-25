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
		if (num < 9)
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}
		if (num == 9)
			putchar(num + '0');
	}

	return (0);
}

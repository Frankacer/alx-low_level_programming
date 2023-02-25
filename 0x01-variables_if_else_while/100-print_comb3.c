#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * Return: 0 always
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n > i)
			{
				putchar('0' + i);
				putchar('0' + n);
				if (i != 8 && n <= 9)
				{
					putchar(',');
					putchar(' ');
				}
				else
					putchar('\n');
			}
		}
	}

	return (0);
}

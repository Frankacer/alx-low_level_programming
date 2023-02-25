#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from zero
 * Return: 0 always
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);

}

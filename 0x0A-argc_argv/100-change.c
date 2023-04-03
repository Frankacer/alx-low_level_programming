#include <stdio.h>
#include <stdlib.h>

/**
 * coin_count - Counts the minimum number of coins needed to make change
 * for a given amount of money.
 * @n: The amount of money.
 *
 * Return: The minimum number of coins needed to make change.
 */
int coin_count(int n)
{
	int count = 0;

	while (n > 0)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else
			n -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Prints the minimum number of coins needed to make change
 * for a given amount of money.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: 0 if successful, 1 if there are any errors.
 */
int main(int argc, char **argv)
{
	int n, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = coin_count(n);

	printf("%d\n", coins);

	return (0);
}

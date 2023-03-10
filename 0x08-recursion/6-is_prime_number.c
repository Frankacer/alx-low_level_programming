#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The integer to check
 *
 * Return: 1 if @n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)  /* 0 and 1 are not prime numbers */
		return (0);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)  /* If n is divisible by any number from 2 to n-1 */
			return (0);  /* then it's not a prime number */
	}


	return (1);  /* If we reach here, n is a prime number */
}

#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: input number of type int
 *
 * Return: factorial of number, -1 if input is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

#include "main.h"

/**
 * _sqrt_helper - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 * @min: The smallest possible square root of n.
 * @max: The largest possible square root of n.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_helper(int n, int min, int max)
{
	int mid;

	if (max < min)
		return (-1);

	mid = (min + max) / 2;

	if (mid * mid == n)
		return (mid);
	if (mid * mid < n)
		return (_sqrt_helper(n, mid + 1, max));

	return (_sqrt_helper(n, min, mid - 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n));
}

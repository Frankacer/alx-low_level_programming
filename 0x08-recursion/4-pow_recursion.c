#include "main.h"

/**
 * _pow_recursion - computes x to the y
 * @x: base number
 * @y: power
 *
 * Return: -1 if y < 0 or value of exponentiation for y >= 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if ((y % 2) && (x < 0))
		return (-(x * _pow_recursion(x, y - 1)));
	else
		return (x * _pow_recursion(x, y - 1));
}

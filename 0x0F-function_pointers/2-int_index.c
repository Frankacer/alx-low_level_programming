#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element for which the cmp
 * function does not return 0, or -1 if no element matches or
 * if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

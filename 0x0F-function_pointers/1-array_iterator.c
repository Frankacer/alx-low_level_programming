#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Apply a function to each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: The function to apply to each element of trray.
 *
 * This function iterates over each element of the array and
 * applies the specified function to it.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	/* Loop over the array and apply the function to each element */
	for (i = 0; i < size; i++)
		action(array[i]);
}

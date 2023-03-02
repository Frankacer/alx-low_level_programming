#include "main.h"


/**
 * swap_int - swaps the valies intwo variables
 * @a: ponter variable to 1st var
 * @b: pointer variable 2nd var
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

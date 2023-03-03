#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer that stores the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len_res, i, j, k, sum, carry = 0;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;
	if (len1 > size_r || len2 > size_r)
		return (0);
	len_res = (len1 > len2 ? len1 : len2) + 1;
	r[len_res--] = '\0';
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[len_res--] = (sum % 10) + '0';
	}
	if (carry)
	{
		if (len_res < 0)
			return (0);
		r[len_res--] = carry + '0';
	}
	if (len_res >= 0)
		return (0);
	return (r + len_res + 1);
}

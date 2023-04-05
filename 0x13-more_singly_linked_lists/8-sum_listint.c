#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list.
 *         If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the list, adding up the data of each node */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	/* Return the sum */
	return (sum);
}

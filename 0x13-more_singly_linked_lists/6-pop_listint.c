#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: A pointer to a pointer to the head node of the list to be deleted.
 *
 * Return: The value of the deleted head node's data (n).
 *         If the list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Save the value of the head node's data */
	n = (*head)->n;

	/* Move the head pointer to the next node */
	temp = *head;
	*head = (*head)->next;

	/* Free the deleted head node */
	free(temp);

	/* Return the value of the deleted head node's data */
	return (n);
}

#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to return.
 *
 * Return: A pointer to the nth node of the linked list.
 *         If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/* Traverse the list until the desired index is reached */
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	/* If the desired node exists, return a pointer to it */
	if (i == index && head != NULL)
		return (head);

	/* Otherwise, return NULL */
	return (NULL);
}

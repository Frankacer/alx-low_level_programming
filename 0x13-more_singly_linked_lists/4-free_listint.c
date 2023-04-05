#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to the head node of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Traverse the list, freeing each node */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
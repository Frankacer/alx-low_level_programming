#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
 *
 * @head: A pointer to a pointer to the head node of the list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* Traverse the list, freeing each node */
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	/* Set the head pointer to NULL to indicate an empty list */
	*head = NULL;
}

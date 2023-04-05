#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0.
 * @n: The value of the data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int i;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the data of the new node */
	new_node->n = n;

	/* Special case: insert at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Find the node before the insertion point */
	temp_node = *head;
	for (i = 0; i < idx - 1 && temp_node != NULL; i++)
		temp_node = temp_node->next;

	/* If the index is greater than the number of nodes, return NULL */
	if (temp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node */
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
